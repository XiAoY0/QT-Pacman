#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent)
    //: QMainWindow(parent), //注释掉此行后 任务栏图标出现 我也不知道为什么可以这么解决
    :ui(new Ui::GameWindow)
{
    ui->setupUi(this);
}

GameWindow::~GameWindow()
{
    delete ui;

}
