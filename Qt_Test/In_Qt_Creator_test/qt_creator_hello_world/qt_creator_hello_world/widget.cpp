#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    int i = 0;
    i = i + 1;
    i = i + 1;
    i = 100 ;
    ui->setupUi(this);
    ui->pushButton->setText("hellow_world!!!!");
}

Widget::~Widget()
{
    delete ui;
}
