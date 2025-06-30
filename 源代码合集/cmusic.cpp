#include "cmusic.h"
#include "ui_cmusic.h"
#include <QFileDialog>
#include <QDir>
#include <QDebug>
#include <QMediaPlayer>
#include <QMessageBox>
#include <QTimer>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QPainter>
#include <QRandomGenerator>

cmusic::cmusic(QWidget *parent, user* in)
    : QDialog(parent)
    , ui(new Ui::cmusic)
{
    ui->setupUi(this);
    player = new QMediaPlayer();
    output = new QAudioOutput();
    player->setAudioOutput(output);
    output->setVolume(0.5);
    connect(player, &QMediaPlayer::mediaStatusChanged, this, &cmusic::onMediaStatusChanged);
    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(onPositionChanged(qint64)));
    connect(player,SIGNAL(durationChanged(qint64)),this,SLOT(onDurationChanged(qint64)));
    mode_index = 0;
    QPushButton* songButtons[8] = {ui->song1, ui->song2, ui->song3, ui->song4,
                                   ui->song5, ui->song6, ui->song7, ui->song8};
    delButtons[0] = ui->del1;
    delButtons[1] = ui->del2;
    delButtons[2] = ui->del3;
    delButtons[3] = ui->del4;
    delButtons[4] = ui->del5;
    delButtons[5] = ui->del6;
    delButtons[6] = ui->del7;
    delButtons[7] = ui->del8;

    //用户数据初始化
    listfile = in->listfile;
    num = in->sum_song;
    for(int i = 0;i < num;i++){
        QString s = in->list[i];
        QString text = "";
        int check = 0;
        for(int j = s.size() - 1;j >= 0;j--){
            if(s[j] == '.' && check == 0)check = 1;
            else if(s[j] != '/' && check == 1)text = s[j] + text;
            else if(s[j] == '/' && check == 1)break;
        }
        if(ui->song1->text() == "暂无歌曲"){
            ui->song1->setText(text);
            list[0] = s;
            ui->song1->show();
        }
        else if(ui->song2->text() == "暂无歌曲"){
            ui->song2->setText(text);
            list[1] = s;
            ui->song2->show();
        }
        else if(ui->song3->text() == "暂无歌曲"){
            ui->song3->setText(text);
            list[2] = s;
            ui->song3->show();
        }
        else if(ui->song4->text() == "暂无歌曲"){
            ui->song4->setText(text);
            list[3] = s;
            ui->song4->show();
        }
        else if(ui->song5->text() == "暂无歌曲"){
            ui->song5->setText(text);
            list[4] = s;
            ui->song5->show();
        }
        else if(ui->song6->text() == "暂无歌曲"){
            ui->song6->setText(text);
            list[5] = s;
            ui->song6->show();
        }
        else if(ui->song7->text() == "暂无歌曲"){
            ui->song7->setText(text);
            list[6] = s;
            ui->song7->show();
        }
        else if(ui->song8->text() == "暂无歌曲"){
            ui->song8->setText(text);
            list[7] = s;
            ui->song8->show();
        }
    }
    //界面初始化
    for (int i = 0; i < 8; ++i) {
        delButtons[i]->hide();
        if (songButtons[i]->text() == "暂无歌曲") {
            songButtons[i]->hide();
        }
    }
    ui->btnlast->setToolTip("上一首");
    ui->btnnext->setToolTip("下一首");
    ui->btnstart->setToolTip("播放");
    ui->btnstop->setToolTip("暂停");
    ui->pushButton_2->setToolTip("列表循环");
    ui->btnstart->setEnabled(false);
    ui->btnstop->setEnabled(false);

    //添加事件过滤器
    ui->song1->installEventFilter(this);
    ui->song2->installEventFilter(this);
    ui->song3->installEventFilter(this);
    ui->song4->installEventFilter(this);
    ui->song5->installEventFilter(this);
    ui->song6->installEventFilter(this);
    ui->song7->installEventFilter(this);
    ui->song8->installEventFilter(this);

    //播放状态初始化
    labels[0] = ui->label_3;
    labels[1] = ui->label_4;
    labels[2] = ui->label_5;
    labels[3] = ui->label_6;
    labels[4] = ui->label_7;
    labels[5] = ui->label_8;
    labels[6] = ui->label_9;
    labels[7] = ui->label_10;
    for(int i = 0;i < 8;i++){
        labels[i]->hide();
    }

    //唱片旋转初始化
    ui->label_record->setStyleSheet("background: transparent; border: none;");
    rotationTimer = new QTimer(this);
    rotationAngle = 0.0;
    connect(rotationTimer, &QTimer::timeout, this, &cmusic::rotateRecord);
    recordPixmap = QPixmap(":/res/Yeezus_resized.jpg");
    updateRecordImage();

    //删去原有音量调节按钮
    ui->btnadd->hide();
    ui->btnlower->hide();
}

cmusic::~cmusic()
{
    delete ui;
}

void cmusic::updateRecordImage()
{
    if (recordPixmap.isNull()) {
        ui->label_record->setText("唱片图像未加载");
        return;
    }

    QPixmap rotatedPixmap(recordPixmap.size());
    rotatedPixmap.fill(Qt::transparent);
    QPainter rotPainter(&rotatedPixmap);
    rotPainter.setRenderHints(QPainter::SmoothPixmapTransform | QPainter::Antialiasing);
    rotPainter.translate(recordPixmap.width() / 2, recordPixmap.height() / 2);
    rotPainter.rotate(rotationAngle);
    rotPainter.translate(-recordPixmap.width() / 2, -recordPixmap.height() / 2);
    rotPainter.drawPixmap(0, 0, recordPixmap);
    rotPainter.end();

    QPixmap circularPixmap(rotatedPixmap.size());
    circularPixmap.fill(Qt::transparent);
    QPainter circlePainter(&circularPixmap);
    circlePainter.setRenderHint(QPainter::Antialiasing);
    QPainterPath path;
    path.addEllipse(0, 0, rotatedPixmap.width(), rotatedPixmap.height());
    circlePainter.setClipPath(path);
    circlePainter.drawPixmap(0, 0, rotatedPixmap);
    circlePainter.end();
    // 设置到UI标签
    ui->label_record->setPixmap(circularPixmap);
}

void cmusic::rotateRecord()
{
    rotationAngle += 0.5; // 每次增加0.5度
    if (rotationAngle >= 360.0) {
        rotationAngle = 0.0;
    }
    updateRecordImage();
}

// 在播放状态改变时更新旋转
void cmusic::onPlaybackStateChanged(QMediaPlayer::PlaybackState state)
{
    if (state == QMediaPlayer::PlayingState) {
        rotationTimer->start(20); // 每20毫秒旋转一次
        ui->btnstop->setEnabled(true);
        ui->btnstart->setEnabled(false);
    } else {
        rotationTimer->stop();
        ui->btnstop->setEnabled(false);
        ui->btnstart->setEnabled(true);
    }
}

void cmusic::on_cin_clicked()
{
    if(ui->song8->text() != "暂无歌曲"){
        QMessageBox::information(this, "提示", "歌曲列表已满，无法添加更多歌曲");
        return;
    }
    QString CurPath = QDir::currentPath();
    QString dlgTitle = "选择音频文件";
    QString filter = "音频文件(*.mp3 *.wav *.wma);;mp3文件(*.mp3);;wav文件(*.wav);;wma文件(*.wma);;所有文件(*.*)";
    QStringList fileList = QFileDialog::getOpenFileNames(this,dlgTitle,CurPath,filter);
    if(fileList.count() < 1)return;
    for(int i = 0;i < fileList.count();i++){
        QString s = fileList.at(i);
        QString text = "";
        int check = 0;
        num += 1;
        for(int i = s.size() - 1;i >= 0;i--){
            if(s[i] == '.' && check == 0)check = 1;
            else if(s[i] != '/' && check == 1)text = s[i] + text;
            else if(s[i] == '/' && check == 1)break;
        }
        if(ui->song1->text() == "暂无歌曲"){
            ui->song1->setText(text);
            list[0] = s;
            ui->song1->show();
        }
        else if(ui->song2->text() == "暂无歌曲"){
            ui->song2->setText(text);
            list[1] = s;
            ui->song2->show();
        }
        else if(ui->song3->text() == "暂无歌曲"){
            ui->song3->setText(text);
            list[2] = s;
            ui->song3->show();
        }
        else if(ui->song4->text() == "暂无歌曲"){
            ui->song4->setText(text);
            list[3] = s;
            ui->song4->show();
        }
        else if(ui->song5->text() == "暂无歌曲"){
            ui->song5->setText(text);
            list[4] = s;
            ui->song5->show();
        }
        else if(ui->song6->text() == "暂无歌曲"){
            ui->song6->setText(text);
            list[5] = s;
            ui->song6->show();
        }
        else if(ui->song7->text() == "暂无歌曲"){
            ui->song7->setText(text);
            list[6] = s;
            ui->song7->show();
        }
        else if(ui->song8->text() == "暂无歌曲"){
            ui->song8->setText(text);
            list[7] = s;
            ui->song8->show();
        }
    }
    getData();
}


void cmusic::on_song1_clicked()
{
    playSong(0);
}


void cmusic::on_btnstop_clicked()
{
    if(player->isPlaying()){
        player->pause();
        rotationTimer->stop();
    }
}


void cmusic::on_btnstart_clicked()
{
    if(!player->isPlaying() && player->hasAudio()){
        player->play();
        if (!rotationTimer->isActive()) {
            rotationTimer->start(20); // 开始旋转
        }
    }
}

void cmusic::on_btnadd_clicked()
{
    if(output->volume() + 0.1 <= 1)output->setVolume(output->volume() + 0.1);
}


void cmusic::on_btnlower_clicked()
{
    if(output->volume() - 0.1 >= 0)output->setVolume(output->volume() - 0.1);
    else output->setVolume(0);
}


void cmusic::on_btnlast_clicked()
{
    if(mode_index == 0 || mode_index == 2){
        for(int i = 0;i < 8;i++){
            turn -= 1;if(turn < 0)turn = 7;
            if(!list[turn].isEmpty()){
                playSong(turn);
                break;
            }
        }
    }
    else if(mode_index == 1){
        QRandomGenerator generator = QRandomGenerator::securelySeeded();
        int randomNumber = generator.bounded(num);
        playSong(randomNumber);
    }
}

void cmusic::on_btnnext_clicked()
{
    if(mode_index == 0 || mode_index == 2){
        for(int i = 0;i < 8;i++){
            turn = (turn + 1) % 8;
            if(!list[turn].isEmpty()){
                playSong(turn);
                break;
            }
        }
    }
    else if(mode_index == 1){
        QRandomGenerator generator = QRandomGenerator::securelySeeded();
        int randomNumber = generator.bounded(num);
        playSong(randomNumber);
    }
}

void cmusic::onDurationChanged(qint64 duration)
{
    ui->horizontalSlider->setMaximum(duration);
    int secs = duration / 1000;
    int mins = secs / 60;
    secs = secs % 60;
    durationTime = QString::asprintf("%d:%d",mins,secs);
    ui->position->setText(positionTime+"/"+durationTime);
}
void cmusic::onPositionChanged(qint64 position)
{
    if(ui->horizontalSlider->isSliderDown())
        return;//如果手动调整进度条，则不处理
    ui->horizontalSlider->setSliderPosition(position);
    int secs = position/1000;
    int mins = secs/60;
    secs = secs % 60;
    positionTime = QString::asprintf("%d:%d",mins,secs);
    ui->position->setText(positionTime);
    ui->duration->setText(durationTime);
}
void cmusic::on_horizontalSlider_sliderReleased()
{
    player->setPosition(ui->horizontalSlider->value());
}


void cmusic::on_song2_clicked()
{
    playSong(1);
}


void cmusic::on_song3_clicked()
{
    playSong(2);
}


void cmusic::on_song4_clicked()
{
    playSong(3);
}


void cmusic::on_song5_clicked()
{
    playSong(4);
}


void cmusic::on_song6_clicked()
{
    playSong(5);
}

void cmusic::on_song7_clicked()
{
    playSong(6);
}


void cmusic::on_song8_clicked()
{
    playSong(7);
}

void cmusic::onMediaStatusChanged(QMediaPlayer::MediaStatus status) {
    // 当媒体播放到末尾时自动播放下一首
    if (status == QMediaPlayer::EndOfMedia) {
        if(mode_index == 0 || mode_index == 1)on_btnnext_clicked();
        else if(mode_index == 2)on_btnstart_clicked(); // 单曲循环
    }
}

void cmusic::playSong(int index) {
    if (list[index].isEmpty()) return;

    if (!QFile::exists(list[index])) {
        QMessageBox::warning(this, "文件不存在",
                             "歌曲文件不存在或已被删除:\n" + list[index]);

        // 直接调用删除函数移除该歌曲
        removeSong(index);
        return;
    }

    player->setSource(QUrl::fromLocalFile(list[index]));
    output->setVolume(output->volume());

    // 连接播放状态改变信号
    connect(player, &QMediaPlayer::playbackStateChanged, this, &cmusic::onPlaybackStateChanged);

    QObject::connect(player, &QMediaPlayer::playbackStateChanged, [](QMediaPlayer::PlaybackState state) {
        qDebug() << "State changed:" << state;
    });

    QObject::connect(player, &QMediaPlayer::errorOccurred, [](QMediaPlayer::Error error, const QString &errorString) {
        qDebug() << "Error:" << errorString;
    });

    player->play();
    turn = index;
    for(int i = 0;i < 8;i++)labels[i]->hide();
    labels[turn]->show();

    // 开始旋转
    if (!rotationTimer->isActive()) {
        rotationTimer->start(20);
    }
}

bool cmusic::eventFilter(QObject *obj, QEvent *event)
{
    // 处理歌曲按钮的悬停事件
    for (int i = 0; i < 8; i++) {
        QPushButton *songBtn = nullptr;
        switch(i) {
        case 0: songBtn = ui->song1; break;
        case 1: songBtn = ui->song2; break;
        case 2: songBtn = ui->song3; break;
        case 3: songBtn = ui->song4; break;
        case 4: songBtn = ui->song5; break;
        case 5: songBtn = ui->song6; break;
        case 6: songBtn = ui->song7; break;
        case 7: songBtn = ui->song8; break;
        }

        if (!songBtn) continue;

        // 检查事件是否发生在歌曲按钮或其删除按钮上
        bool isRelatedEvent = (obj == songBtn) || (obj == delButtons[i]);

        if (!isRelatedEvent) continue;

        // 鼠标进入歌曲按钮区域
        if (event->type() == QEvent::Enter) {
            // 显示删除按钮（如果有歌曲）
            if (!list[i].isEmpty()) {
                delButtons[i]->show();
            }
            return true;
        }

        // 鼠标离开歌曲按钮区域
        if (event->type() == QEvent::Leave) {
            // 获取鼠标全局位置
            QPoint globalPos = QCursor::pos();

            // 将全局坐标转换为歌曲按钮的局部坐标
            QPoint localPos = songBtn->mapFromGlobal(globalPos);

            // 检查鼠标是否仍在歌曲按钮区域内
            bool isMouseOverSongBtn = songBtn->rect().contains(localPos);

            // 如果鼠标不在歌曲按钮区域内，隐藏删除按钮
            if (!isMouseOverSongBtn) {
                delButtons[i]->hide();
            }
            return true;
        }
    }
    return QDialog::eventFilter(obj, event);
}

void cmusic::on_del1_clicked() { removeSong(0);}
void cmusic::on_del2_clicked() { removeSong(1);}
void cmusic::on_del3_clicked() { removeSong(2);}
void cmusic::on_del4_clicked() { removeSong(3);}
void cmusic::on_del5_clicked() { removeSong(4);}
void cmusic::on_del6_clicked() { removeSong(5);}
void cmusic::on_del7_clicked() { removeSong(6);}
void cmusic::on_del8_clicked() { removeSong(7);}

void cmusic::removeSong(int index)
{
    // 弹出确认对话框
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认删除",
                                  "确定要删除这首歌曲吗？",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply != QMessageBox::Yes) return;

    // 获取要删除的歌曲按钮
    QPushButton* songButton = nullptr;
    switch(index) {
    case 0: songButton = ui->song1; break;
    case 1: songButton = ui->song2; break;
    case 2: songButton = ui->song3; break;
    case 3: songButton = ui->song4; break;
    case 4: songButton = ui->song5; break;
    case 5: songButton = ui->song6; break;
    case 6: songButton = ui->song7; break;
    case 7: songButton = ui->song8; break;
    }

    if (!songButton) return;

    // 创建淡出动画
    QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect(songButton);
    songButton->setGraphicsEffect(effect);

    QPropertyAnimation *animation = new QPropertyAnimation(effect, "opacity");
    animation->setDuration(300); // 300毫秒动画
    animation->setStartValue(1.0);
    animation->setEndValue(0.0);
    animation->setEasingCurve(QEasingCurve::OutCubic);

    // 连接动画完成信号
    connect(animation, &QPropertyAnimation::finished, this, [this, index, songButton]() {
        // 如果正在播放这首歌曲，先停止
        if (turn == index && player->isPlaying()) {
            player->stop();
            player->setSource(QUrl());
        }
        // 删除歌曲并前移后续歌曲
        for (int i = index; i < 7; i++) {
            list[i] = list[i + 1];

            // 更新按钮文本
            QPushButton* currentBtn = nullptr;
            QPushButton* nextBtn = nullptr;

            switch(i) {
            case 0: currentBtn = ui->song1; nextBtn = ui->song2; break;
            case 1: currentBtn = ui->song2; nextBtn = ui->song3; break;
            case 2: currentBtn = ui->song3; nextBtn = ui->song4; break;
            case 3: currentBtn = ui->song4; nextBtn = ui->song5; break;
            case 4: currentBtn = ui->song5; nextBtn = ui->song6; break;
            case 5: currentBtn = ui->song6; nextBtn = ui->song7; break;
            case 6: currentBtn = ui->song7; nextBtn = ui->song8; break;
            }

            if (currentBtn && nextBtn) {
                currentBtn->setText(nextBtn->text());
            }
        }

        // 清空最后一个位置
        list[7] = "";
        ui->song8->setText("暂无歌曲");

        // 更新当前播放索引
        if (turn == index) {
            turn = -1; // 当前播放歌曲被删除
        } else if (turn > index) {
            turn--; // 当前播放歌曲位置前移
        }

        // 更新所有按钮的显示状态
        QPushButton* songButtons[8] = {
            ui->song1, ui->song2, ui->song3, ui->song4,
            ui->song5, ui->song6, ui->song7, ui->song8
        };

        for (int i = 0; i < 8; i++) {
            if (list[i].isEmpty()) {
                songButtons[i]->hide();
                delButtons[i]->hide();
            } else {
                songButtons[i]->show();
            }
        }

        // 重置淡出效果
        songButton->setGraphicsEffect(nullptr);

        // 隐藏删除按钮
        delButtons[index]->hide();
        num -= 1;

        //改变播放进程
        for(int i = 0;i < 8;i++){
            labels[i]->hide();
        }
        if(turn != -1)labels[turn]->show();

        getData();
    });

    // 开始动画
    animation->start();
}

void cmusic::on_pushButton_2_clicked()
{
    mode_index = (mode_index + 1) % 3;
    if(mode_index == 0){
        ui->pushButton_2->setIcon(QIcon::fromTheme("media-playlist-repeat"));
        ui->pushButton_2->setToolTip("列表循环");
    }
    else if(mode_index == 1){
        ui->pushButton_2->setIcon(QIcon::fromTheme("media-playlist-shuffle"));
        ui->pushButton_2->setToolTip("随机播放");
    }
    else if(mode_index == 2){
        ui->pushButton_2->setIcon(QIcon::fromTheme("view-refresh"));
        ui->pushButton_2->setToolTip("单曲循环");
    }
}

void cmusic::getData(){
    QFile file(listfile);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug() << "Open File Error!";
        return;
    }
    QTextStream out(&file);
    out << num;
    out << "\n";
    for(int i = 0;i < num;i++){
        out << list[i];
        out << "\n";
    }
    file.close();
}

void cmusic::on_volumeSlider_valueChanged(int value)
{
    // 音量范围：0% 到 100%
    double volume = value / 100.0;
    output->setVolume(volume);
    ui->volumeLabel->setText(QString("音量: %1%").arg(value));
}
