#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ClickableLabel.h"
#include "gamewindow.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Ui::MainWindow *ui;
    GameWindow *gameWindow;
private:
    void onLabel_2Clicked();
    void onLabel_3Clicked();
    void onLabel_4Clicked();
    void onLabel_5Clicked();

};
#endif // MAINWINDOW_H
