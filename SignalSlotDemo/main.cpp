#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow w;
    w.setWindowTitle("Widget工程");
    w.resize(325, 120);

    QLineEdit lineEdit(&w);
    lineEdit.setGeometry(30, 20, 180, 36);
    lineEdit.setPlaceholderText("请输入文本");

    QPushButton btn("取消", &w);
    btn.setGeometry(220, 20, 70, 36);

    QLabel label(&w);
    label.setGeometry(30, 70, 250, 30);

    QPushButton btn1("确定", &w);
    btn1.setGeometry(220,60,70,36);


    //信号是只有函数声明、没有函数体的成员函数。
    //槽是拥有完整函数体的普通成员函数，你可以在槽函数中实现各种功能，与普通函数相比并没有区别，例如 quit() 的作用就是退出程序。
    //连接clicke()信号和quit()槽

    QObject::connect(&btn, SIGNAL(clicked()), &app, SLOT(quit()));

    //信号和槽机制归根结底也是回调函数，只不过绕了个圈子。
    //在这种机制下，程序员有两次处理事件的机会，
    //一是在捕获事件后发射信号前进行预处理（事件不符合预期可以不发射信号），
    //二是在槽函数中进行主要处理。
    //连接textChanged()信号和setText()槽

    QObject::connect(&lineEdit, SIGNAL(textChanged(QString)), &label, SLOT(setText(QString)));

    //connect() 是 QObject 类的静态成员函数
    //鼓励使用一下第2种原型
    QObject::connect(&btn1,&QPushButton::clicked, &app,&QApplication::quit);

    w.show();
    return app.exec();
}
