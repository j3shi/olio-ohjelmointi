#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // QObject::connect(ui->btnCount, SIGNAL(clicked()), this, SLOT(on_btnCount_clicked()));
    // QObject::connect(ui->btnReset, SIGNAL(clicked()), this, SLOT(on_btnReset_clicked()));
    //Kun nämä kaksi otetaan käyttöön nousee counter aina kahdella.
    //Kun sovelluksen suoritti ilman näitä, nousi counterin luku aina yhdellä napin painalluksen jälkeen.
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter++;
    QString countText = QString::number(counter);
    ui->txtResult->setText(countText);
    ui->labelInfo->setText("Painiketta Count painettu " + countText + " kertaa");

}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    QString countText = QString::number(counter);
    ui->txtResult->setText(countText);
    ui->labelInfo->setText("Painiketta Count painettu " + countText + " kertaa");

}

