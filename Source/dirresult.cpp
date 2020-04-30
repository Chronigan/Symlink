#include "dirresult.h"
#include "ui_dirresult.h"

dirResult::dirResult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dirResult)
{
    ui->setupUi(this);

}

dirResult::~dirResult()
{
    delete ui;
}


void dirResult::on_pushButton_clicked()
{
    this->close();
}
