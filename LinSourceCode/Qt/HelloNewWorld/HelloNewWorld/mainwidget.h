#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
//添加成员变量QPushButton与QLabel标签需要引入QPushButton与QLabel类。
#include <QPushButton>
#include <QLabel>

#if 1
class MainWidget : public QWidget
{
    Q_OBJECT
public:
    MainWidget();

    QPushButton* button;    //成员控件按钮
    QLabel* label;  //成员控件标签

public slots:
    //这里可以用来声明槽函数
    void changeText(){
        label->setText("Hello New World!");
    }
};
#endif

#if 0
class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = nullptr);
    //MainWidget类的构造函数 因为使用了explicit所以为显式构造函数
    //c++ 类构造函数默认情况下即声明为implicit(隐式)
    //关于显示与隐式的区别这里就不介绍了，诸位若不知道可以搜索

    QPushButton* button;    //成员控件按钮
    QLabel* label;  //成员控件标签

signals:
    //这里可以用来声明信号函数
public slots:
    //这里可以用来声明槽函数
};
#endif

#endif // MAINWIDGET_H
