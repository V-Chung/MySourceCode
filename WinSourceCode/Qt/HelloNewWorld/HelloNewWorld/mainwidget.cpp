#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
    //显示调用MainWidget构造函数
    //调用顺序是先调用父类QWidget的构造函数，再调用派生类的构造函数
    resize(400, 400);
    //设置窗口大小为400px * 400px
    label = new QLabel("Hello World!", this);
    //初始化控件lable文字显示为Hello World!， 父对象为当前MainWidget窗口对象
    label->setGeometry(150, 100, 230, 50);
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
