#ifndef USER_H
#define USER_H
#include<QDebug>
#include<QFile>

class user
{
public:
    user();
    user(QString s1,QString s2);
    user(user& in);
    void operator = (user x){
        id = x.id;
    }
    QString id;
    QString answer;
    QString list[8];
    QString name;
    QString head;
    qint64 totalMinutes;
    QString totalTimes;

    QString namefile;
    QString headfile;
    QString minfile;
    QString timefile;
    QString listfile;
    int sum_song;
};

#endif // USER_H
