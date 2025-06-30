#include "user.h"
#include<QFileInfo>
#include<QDir>

user::user(QString s1, QString s2) {
    id = s1;
    answer = s2;
    name = "用户";
    namefile = s1 + "_namefile.txt";
    headfile = s1 + "_headfile.txt";
    minfile = s1 + "_minfile.txt";
    timefile = s1 + "_timefile.txt";
    listfile = s1 + "_listfile.txt";
}

user::user(){
    id = "";
    answer = "";
}

user::user(user& in){
    id = in.id;
    answer = in.answer;
}

