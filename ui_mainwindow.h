/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *buttonDir;
    QLineEdit *textIo;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *autoName;
    QPushButton *Create;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(255, 113);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        buttonDir = new QPushButton(centralWidget);
        buttonDir->setObjectName(QString::fromUtf8("buttonDir"));
        buttonDir->setGeometry(QRect(200, 30, 51, 21));
        textIo = new QLineEdit(centralWidget);
        textIo->setObjectName(QString::fromUtf8("textIo"));
        textIo->setGeometry(QRect(10, 30, 181, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textIo->sizePolicy().hasHeightForWidth());
        textIo->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 221, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        autoName = new QCheckBox(layoutWidget);
        autoName->setObjectName(QString::fromUtf8("autoName"));
        autoName->setChecked(true);

        horizontalLayout->addWidget(autoName);

        Create = new QPushButton(layoutWidget);
        Create->setObjectName(QString::fromUtf8("Create"));

        horizontalLayout->addWidget(Create);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        textIo->raise();
        buttonDir->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Create Symlink", 0, QApplication::UnicodeUTF8));
        buttonDir->setText(QApplication::translate("MainWindow", "Browse", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        autoName->setToolTip(QApplication::translate("MainWindow", "Check to allow the app to automatically name your Symlinks", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        autoName->setText(QApplication::translate("MainWindow", "Auto Name Links", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Create->setToolTip(QApplication::translate("MainWindow", "Click to create links in your selected directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Create->setText(QApplication::translate("MainWindow", "Create", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
