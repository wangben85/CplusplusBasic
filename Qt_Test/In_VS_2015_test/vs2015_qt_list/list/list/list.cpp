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
    QString str = ui.lineEdit->text();     //��ȡ�б༭���ı�
    QListWidgetItem *item = new QListWidgetItem;
    item->setText(str);    //�����б�����ı�
    ui.listWidget->addItem(item);          //�����б���б��
}

void list::on_TopAdd_clicked()
{
    QString str = ui.lineEdit->text();     //��ȡ�б༭���ı�
    QListWidgetItem *item = new QListWidgetItem;
    item->setText(str);                     //�����б�����ı�
    ui.listWidget->insertItem(0, item);          //�����б���б��
}

void list::on_Delete_clicked()
{
    //��ȡ�б����ָ��
    QListWidgetItem *item = ui.listWidget->takeItem(ui.listWidget->currentRow());
    delete item;        //�ͷ�ָ����ָ����б���
}

void list::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    qDebug() << "the selected item is" << item->text();
}