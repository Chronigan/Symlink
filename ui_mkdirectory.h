/********************************************************************************
** Form generated from reading UI file 'mkdirectory.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MKDIRECTORY_H
#define UI_MKDIRECTORY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mkdirectory
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *butonYes;
    QPushButton *buttonNo;

    void setupUi(QDialog *mkdirectory)
    {
        if (mkdirectory->objectName().isEmpty())
            mkdirectory->setObjectName(QString::fromUtf8("mkdirectory"));
        mkdirectory->resize(201, 120);
        layoutWidget = new QWidget(mkdirectory);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 180, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        butonYes = new QPushButton(layoutWidget);
        butonYes->setObjectName(QString::fromUtf8("butonYes"));

        horizontalLayout->addWidget(butonYes);

        buttonNo = new QPushButton(layoutWidget);
        buttonNo->setObjectName(QString::fromUtf8("buttonNo"));

        horizontalLayout->addWidget(buttonNo);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(mkdirectory);

        QMetaObject::connectSlotsByName(mkdirectory);
    } // setupUi

    void retranslateUi(QDialog *mkdirectory)
    {
        mkdirectory->setWindowTitle(QApplication::translate("mkdirectory", "Directory Error", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("mkdirectory", "Uh Oh! It looks like that Directory does not exists. Would you like me to try and create it for you?", 0, QApplication::UnicodeUTF8));
        butonYes->setText(QApplication::translate("mkdirectory", "Yes", 0, QApplication::UnicodeUTF8));
        buttonNo->setText(QApplication::translate("mkdirectory", "No", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mkdirectory: public Ui_mkdirectory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MKDIRECTORY_H
