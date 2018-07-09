#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QLabel label("这是Label控件");  //没有父对象
    label.setWindowTitle("Label控件作为顶级窗口");
    label.setGeometry(100, 50, 360, 160);
    label.setAlignment(Qt::AlignCenter);
    label.show();

    QPushButton btn;  //没有父对象
    btn.setWindowTitle("PushButton控件作为顶级窗口");
    btn.setText("这是个大大的按钮");
    btn.setGeometry(480, 50, 360, 160);
    btn.show();

    return app.exec();
}
