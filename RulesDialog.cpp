#include "RulesDialog.h"
#include "ui_RulesDialog.h"

RulesDialog::RulesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RulesDialog)
{
    ui->setupUi(this);

    // 设置规则解释文本
    QString rules = "Pacman游戏规则:\n\n"
                    "1. 玩家控制Pacman在迷宫中移动，吃掉所有点点（豆子）。\n"
                    "2. 游戏中有四个幽灵，他们会追捕Pacman。\n"
                    "3. 吃掉大豆（能量豆）后，Pacman可以短时间内吃掉幽灵。\n"
                    "4. 吃掉所有点点后，进入下一关。\n"
                    "5. 如果被幽灵抓住，Pacman会失去一条命。";
    ui->label->setText(rules);
}

RulesDialog::~RulesDialog()
{
    delete ui;
}
