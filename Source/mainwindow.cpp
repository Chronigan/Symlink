#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    endProgram.setModal(true);
    linkError.setModal(true);
    manualName.setModal(true);
    mkDirectory.setModal(true);
    targetDir.setCurrent(QDir::homePath());
    ui->textIo->setText(targetDir.currentPath());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_buttonDir_clicked()
{
    QStringList hold;               //temporarily holds the chosen directory
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::DirectoryOnly);


    CheckDir();

    if (dialog.exec())
    {
        hold = dialog.selectedFiles();
        targetDir.setCurrent(hold[0]);
        ui->textIo->setText(targetDir.absolutePath());
    }


}

void MainWindow::on_Create_clicked()
{

    QString linkName;               //location that is currently being linked
    QString transfer;               //used to hold the name of the final link
    QChar data= 'a';                //used to iterate through the chars of the link and transfer them to transfer
    int linkToMake = 0;             //used to traverse through linkTargets to get each file
    int test;                       //controls loop used to transfer char
    bool noError = false;           //breaks loop if there is an error



    noError = CheckDir();           //Make Sure we have a valid directory

    while((linkToMake < totalDir) && noError)
    {
        linkName = linkTargets[linkToMake];
        test = linkName.size() - 1;
        data = linkName[test];
        if(ui->autoName->isChecked())
        {
            while(data != '/')
            {
                transfer.prepend(data);
                test--;
                data = linkName[test];
            }

        }
        else
        {
            manualName.RequestName(linkName);
            manualName.exec();
            transfer = manualName.GetName();
        }

        noError = linker.link(linkName, transfer);
        transfer.clear();

        if(noError == false)
        {
            linkError.description(linkTargets[linkToMake]);
            linkError.exec();
        }
        linkToMake++;
    }

    if(noError)
    {
        endProgram.exec();
        if(endProgram.execute() == true)
           this->close();
    }

}


void MainWindow::CreateList(int x)                  //function to create linkTargets list
{
    totalDir = x - 1;
    linkTargets = QCoreApplication::arguments();    //loads arguments passed to the program into list
    linkTargets.removeAt(0);                        //removes junk first argument
}

bool MainWindow::CheckDir()
{
    bool result = false;
    result = targetDir.setCurrent(ui->textIo->text());
    if(result == false)
    {
        mkDirectory.GetDirectory(ui->textIo->text());
        mkDirectory.exec();
        result = targetDir.setCurrent(ui->textIo->text());
    }
    return result;
}

void MainWindow::on_textIo_editingFinished()
{
    CheckDir();
}
