#include "mydialog.h"
#include "ui_mydialog.h"

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    ui->pushButton->setText("Close");
}

MyDialog::~MyDialog()
{
    delete ui;
}


void MyDialog::on_pushButton_clicked()
{
    this->close();
}
