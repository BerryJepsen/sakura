#include "mainwindow.h"
#include <QApplication>
#include<QPushButton>
#include<iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QPushButton b;

        b.setText("Hello world"); //给按钮设置内容
        b.setParent(&w); //指定父对象，注意是取地址
        b.move(10, 10); //移动坐标

    w.show();
    return a.exec();
}
