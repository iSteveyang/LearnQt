#include <QApplication>
#include <QMainWindow>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);   //Qt 程序的入口函数和 C++ Console 程序一样，都是 main() 函数；参数也是一样的。

    //QApplication 类主要用来管理程序的生命周期（包括初始化设置和销毁工作），开启事件循环。
    //对于任何一个 Qt GUI 程序，必须有且仅有一个 QApplication 对象，但可以存在零个或多个窗口。
    QMainWindow w;  //建了一个 QApplication 对象。
    w.setWindowTitle("My Widgets");  //设置标题
    w.resize(300, 140);  //设置客户区大小

    QLabel label("This is a text lable", &w);
    label.setGeometry(100, 50, 160, 30);
    w.show();   //w 是 label 的父辈，父辈调用 show() 函数也会显示所有子控件，所以 label 就不需要再调用 show() 了。

    return app.exec();
}
