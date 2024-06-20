#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ClickableLabel.h"
#include "RulesDialog.h"
#include "gamewindow.h"
#include "ui_gamewindow.h"
QString icon2="C:\\Users\\XIAOm\\Desktop\\大二下软工实践\\pacman素材\\image\\Inky.png";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //信号和槽的连接

    //init界面
    connect(ui->label_2, &ClickableLabel::clicked, this, &MainWindow::onLabel_2Clicked);
    connect(ui->label_3, &ClickableLabel::clicked, this, &MainWindow::onLabel_3Clicked);
    connect(ui->label_4, &ClickableLabel::clicked, this, &MainWindow::onLabel_4Clicked);
    connect(ui->label_5, &ClickableLabel::clicked, this, &MainWindow::onLabel_5Clicked);
    // 创建游戏窗口对象
    gameWindow = new GameWindow(this); // 设置父对象为当前 MainWindow
    qDebug() << "GameWindow has been created";
    gameWindow->setWindowIcon(QIcon(icon2));
}


MainWindow::~MainWindow()
{
    delete ui;
   // 关闭gamewindow 避免内存泄露
    // if(gameWindow){
    //     delete gameWindow;
    //     qDebug()<<"you don't clear the object";
    //     //gameWindow = nullptr;
    // }
}
//start game
void MainWindow::onLabel_2Clicked()
{
    qDebug() << "start clicked!";
    hide();
    gameWindow->show();
}
//rank
void MainWindow::onLabel_3Clicked()
{
    qDebug() << "rank clicked!";
}

//rules
void MainWindow::onLabel_4Clicked()
{
    qDebug() << "rule clicked!";
    RulesDialog dialog(this);
    dialog.exec();

}
//quit
void MainWindow::onLabel_5Clicked()
{
    qDebug() << "quit clicked!";
    QApplication::quit();  // 退出应用程序
}

