#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QMovie>
#include <QLabel>
#include <QString>
QString welcometop="C:\\Users\\XIAOm\\Desktop\\welcometop.gif";
QString icon="C:\\Users\\XIAOm\\Desktop\\大二下软工实践\\pacman素材\\image\\Inky.png";
QString startImage="C:\\Users\\XIAOm\\Desktop\\大二下软工实践\\pacman素材\\image\\gamestart.png";
QString rankImage="C:\\Users\\XIAOm\\Desktop\\大二下软工实践\\pacman素材\\image\\rank.png";
QString quitImage="C:\\Users\\XIAOm\\Desktop\\大二下软工实践\\pacman素材\\image\\quit.png";
QString ruleImage="C:\\Users\\XIAOm\\Desktop\\大二下软工实践\\pacman素材\\image\\rule.png";
//运行程序最开始出现的欢迎界面
void init_welcome(MainWindow& w){
    QMovie *movie = new QMovie(welcometop);
    w.ui->label ->setMovie(movie);
    movie->start();
    w.ui->label->show();
    w.setWindowTitle("Pacman");
    w.setWindowIcon(QIcon(icon));
    //开始游戏label设置背景
    QPixmap startlabel(startImage);
    QPixmap scaledstartlabel = startlabel.scaled(210, 90, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    w.ui->label_2->setPixmap(scaledstartlabel);
    w.ui->label_2->show();
    //ranklabel设置背景
    QPixmap ranklabel(rankImage);
    QPixmap scaledranklabel = ranklabel.scaled(210, 90, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    w.ui->label_3->setPixmap(scaledranklabel);
    w.ui->label_3->show();
    //rulelabel设置背景
    QPixmap rulelabel(ruleImage);
    QPixmap scaledrulelabel = rulelabel.scaled(210, 90, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    w.ui->label_4->setPixmap(scaledrulelabel);
    w.ui->label_4->show();
    //quitlabel设置背景
    QPixmap quitlabel(quitImage);
    QPixmap scaledquitlabel = quitlabel.scaled(210, 90, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    w.ui->label_5->setPixmap(scaledquitlabel);
    w.ui->label_5->show();

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    init_welcome(w);

    return a.exec();
}
