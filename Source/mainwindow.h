#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QTextEdit>
#include <QString>
#include <QStringList>
#include <QFile>
#include <fcntl.h>           /* Definition of AT_* constants */
#include <unistd.h>
#include <unistd.h>
#include <QPlainTextEdit>
#include <finished.h>
#include <QDir>
#include <error.h>
#include <manlinkname.h>
#include <mkdirectory.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void CreateList(int x);        //function to create base directories    
    bool CheckDir();

private slots:

    void on_buttonDir_clicked();
    void on_Create_clicked();
    void on_textIo_editingFinished();

private:
    Ui::MainWindow *ui;
    QStringList linkTargets;        //files to create links to
    int totalDir;                   //total number of directories
    QDir targetDir;                 //Directory in QT form
    QFile linker;                   //creates the link
    finished endProgram;            //displayed after program completes
    error linkError;                //displayed if there is an error trying to create links
    manlinkname manualName;         //used to get the link name if the user has chosen to manually enter it
    mkdirectory mkDirectory;        //Dialog that ask and creates a directory if the entered dir does not exist
};

#endif // MAINWINDOW_H
