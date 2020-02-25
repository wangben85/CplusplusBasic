#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonTextChange,SIGNAL(clicked()),this,SLOT(slotLabelTextChange()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotLabelTextChange()
{
    ui->labelTextChange->setText("TextChange");
}
