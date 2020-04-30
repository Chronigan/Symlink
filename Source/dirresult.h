#ifndef DIRRESULT_H
#define DIRRESULT_H

#include <QDialog>

namespace Ui {
class dirResult;
}

class dirResult : public QDialog
{
    Q_OBJECT

public:
    explicit dirResult(QWidget *parent = 0);
    ~dirResult();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dirResult *ui;

};


#endif // DIRRESULT_H

