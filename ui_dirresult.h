/********************************************************************************
** Form generated from reading UI file 'dirresult.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIRRESULT_H
#define UI_DIRRESULT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dirResult
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *resultlabel;
    QPushButton *pushButton;

    void setupUi(QDialog *dirResult)
    {
        if (dirResult->objectName().isEmpty())
            dirResult->setObjectName(QString::fromUtf8("dirResult"));
        dirResult->resize(174, 143);
        layoutWidget = new QWidget(dirResult);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 171, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        resultlabel = new QLabel(layoutWidget);
        resultlabel->setObjectName(QString::fromUtf8("resultlabel"));
        resultlabel->setAlignment(Qt::AlignCenter);
        resultlabel->setWordWrap(true);

        verticalLayout->addWidget(resultlabel);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(dirResult);

        QMetaObject::connectSlotsByName(dirResult);
    } // setupUi

    void retranslateUi(QDialog *dirResult)
    {
        dirResult->setWindowTitle(QApplication::translate("dirResult", "Error!", 0, QApplication::UnicodeUTF8));
        resultlabel->setText(QApplication::translate("dirResult", "There was an error creating the requested directories. Please ensure you have the proper permissions and try again", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("dirResult", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dirResult: public Ui_dirResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIRRESULT_H
