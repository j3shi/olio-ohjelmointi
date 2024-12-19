#include "form1.h"
#include "ui_form1.h"

Form1::Form1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Form1)
{
    ui->setupUi(this);
}

Form1::~Form1()
{
    delete ui;
}

void Form1::on_btnSave1_clicked()
{
    setFname(ui->textName->text());
    emit mySignal1();
    this->close();
}


void Form1::on_btnSave2_clicked()
{
    setFname(ui->textName->text());
}

QString Form1::getFname() const
{
    return fname;
}

void Form1::setFname(const QString &newFname)
{
    fname = newFname;
}

