#include "error.h"
#include "ui_error.h"

error::error(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::error)
{
    ui->setupUi(this);
}

error::~error()
{
    delete ui;
}

void error::on_pushButton_clicked()
{
    this->close();
}

void error::description(QString problemLink)
{

    ui->label->setText("Uh Oh! There was an issue creating the link to " + problemLink + " . Please ensure you have the proper permissions to write to the target directory, that the link target is on a properly mounted device, and that you chose a valid name for the link. Click okay to return to the program.");

}
