import QtQuick 2.11
import QtQuick.Window 2.11
import QtQuick.Controls 2.4

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("QuickControlDemo")

    Text {
        id: text1
        x: 47
        y: 35
        width: 80
        height: 30
        text: qsTr("用户名：")
        horizontalAlignment: Text.AlignRight
        verticalAlignment: Text.AlignVCenter
        font.pixelSize: 14
    }

    TextField {
        id: textField1
        x: 137
        y: 35
        width: 200
        height: 30
        placeholderText: qsTr("请输入用户名")
    }

    Text {
        id: text2
        x: 47
        y: 85
        width: 80
        height: 30
        text: qsTr("密  码：")
        verticalAlignment: Text.AlignVCenter
        font.pixelSize: 14
        horizontalAlignment: Text.AlignRight
    }

    TextField {
        id: textField2
        x: 137
        y: 85
        width: 200
        height: 30
        //echoMode: 0
        placeholderText: qsTr("请输入密码")
    }

    Button {
        id: button1
        x: 71
        y: 145
        width: 116
        height: 36
        text: qsTr("登 录")
    }

    Button {
        id: button2
        x: 224
        y: 145
        width: 110
        height: 36
        text: qsTr("取 消")
    }
}
