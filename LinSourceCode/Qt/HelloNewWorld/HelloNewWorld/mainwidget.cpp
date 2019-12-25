#include "mainwidget.h"
#include <QApplication>

MainWidget::MainWidget() : QWidget()
{
    resize(400, 400);
    //设置窗口大小为400px * 400px
    label = new QLabel("Hello World!", this);
    //初始化控件lable文字显示为Hello World!， 父对象为当前MainWidget窗口对象
    label->setGeometry(150, 100, 130, 50);
    //lable的位置在x = 150px y = 100px 宽为100px高为50px
    button = new QPushButton("change", this);
    //初始化控件button文字显示为change， 父对象为当前MainWidget窗口对象
    button->setGeometry(150, 175, 130, 50);
    //button的位置在x = 150px y = 175px 宽为100px高为50px
}

int main(int argc, char* argv[]){
    QApplication app(argc, argv);

    MainWidget w;   //构建一个MainWidget窗口w
    w.show();   //显示w

    QObject::connect(w.button, SIGNAL(clicked()), &w, SLOT(changeText()));

    return app.exec();
}
