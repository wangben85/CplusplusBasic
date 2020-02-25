#include "list.h"
#include <QDEBUG>

list::list(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.pushButtonAdd, SIGNAL(clicked()), this, SLOT(on_Add_clicked()));
    connect(ui.pushButtonTopAdd, SIGNAL(clicked()), this, SLOT(on_TopAdd_clicked()));
    connect(ui.pushButtonDelete, SIGNAL(clicked()), this, SLOT(on_Delete_clicked()));
}


void list::on_Add_clicked()
{
    QString str = ui.lineEdit->text();     //获取行编辑框文本
    QListWidgetItem *item = new QListWidgetItem;
    item->setText(str);    //设置列表项的文本
    ui.listWidget->addItem(item);          //加载列表项到列表框
}

void list::on_TopAdd_clicked()
{
    QString str = ui.lineEdit->text();     //获取行编辑框文本
    QListWidgetItem *item = new QListWidgetItem;
    item->setText(str);                     //设置列表项的文本
    ui.listWidget->insertItem(0, item);          //加载列表项到列表框
}

void list::on_Delete_clicked()
{
    //获取列表项的指针
    QListWidgetItem *item = ui.listWidget->takeItem(ui.listWidget->currentRow());
    delete item;        //释放指针所指向的列表项
}

void list::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    qDebug() << "the selected item is" << item->text();
}