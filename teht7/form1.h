#ifndef FORM1_H
#define FORM1_H

#include <QDialog>

namespace Ui {
class Form1;
}

class Form1 : public QDialog
{
    Q_OBJECT

public:
    explicit Form1(QWidget *parent = nullptr);
    ~Form1();

    QString getFname() const;
    void setFname(const QString &newFname);

private slots:
    void on_btnSave1_clicked();

    void on_btnSave2_clicked();

private:
    Ui::Form1 *ui;
    QString fname;
    void mySignal1();
    void mySignal2(QString);
};

#endif // FORM1_H
