#pragma once

#include <QtWidgets/QWidget>
#include "ui_list.h"

class list : public QWidget
{
    Q_OBJECT

public:
    list(QWidget *parent = Q_NULLPTR);

private:
    Ui::listClass ui;

private slots:

    void on_Add_clicked();

    void on_TopAdd_clicked();

    void on_Delete_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

};
