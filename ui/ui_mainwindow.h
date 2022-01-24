/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionAbout;
    QAction *actionHelp;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *editAuthor;
    QLineEdit *editMusicName;
    QLabel *label_6;
    QLineEdit *editDelay;
    QGroupBox *groupBox_4;
    QLabel *label_3;
    QComboBox *cmbSelect;
    QPushButton *btnLoadSheet;
    QPushButton *btnSelect;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnResetHotkey;
    QComboBox *cmbHot1;
    QLabel *label;
    QComboBox *cmbHot2;
    QMenuBar *menubar;
    QMenu *menu_file;
    QMenu *menu_help;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(430, 367);
        MainWindow->setMaximumSize(QSize(430, 400));
        MainWindow->setBaseSize(QSize(430, 330));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 196));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(210, 20, 191, 161));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 30, 53, 16));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 70, 53, 16));
        editAuthor = new QLineEdit(groupBox_3);
        editAuthor->setObjectName(QString::fromUtf8("editAuthor"));
        editAuthor->setEnabled(true);
        editAuthor->setGeometry(QRect(60, 30, 113, 21));
        editAuthor->setReadOnly(true);
        editMusicName = new QLineEdit(groupBox_3);
        editMusicName->setObjectName(QString::fromUtf8("editMusicName"));
        editMusicName->setEnabled(true);
        editMusicName->setGeometry(QRect(60, 70, 113, 21));
        editMusicName->setReadOnly(true);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 110, 53, 16));
        editDelay = new QLineEdit(groupBox_3);
        editDelay->setObjectName(QString::fromUtf8("editDelay"));
        editDelay->setEnabled(true);
        editDelay->setGeometry(QRect(60, 110, 113, 21));
        editDelay->setReadOnly(true);
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 20, 191, 161));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 30, 53, 16));
        cmbSelect = new QComboBox(groupBox_4);
        cmbSelect->addItem(QString());
        cmbSelect->addItem(QString());
        cmbSelect->setObjectName(QString::fromUtf8("cmbSelect"));
        cmbSelect->setGeometry(QRect(90, 30, 81, 22));
        btnLoadSheet = new QPushButton(groupBox_4);
        btnLoadSheet->setObjectName(QString::fromUtf8("btnLoadSheet"));
        btnLoadSheet->setGeometry(QRect(20, 120, 141, 24));
        btnSelect = new QPushButton(groupBox_4);
        btnSelect->setObjectName(QString::fromUtf8("btnSelect"));
        btnSelect->setGeometry(QRect(20, 80, 141, 24));

        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 132));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnResetHotkey = new QPushButton(groupBox);
        btnResetHotkey->setObjectName(QString::fromUtf8("btnResetHotkey"));
        btnResetHotkey->setMaximumSize(QSize(70, 25));

        horizontalLayout_2->addWidget(btnResetHotkey);

        cmbHot1 = new QComboBox(groupBox);
        cmbHot1->addItem(QString());
        cmbHot1->addItem(QString());
        cmbHot1->addItem(QString());
        cmbHot1->setObjectName(QString::fromUtf8("cmbHot1"));
        cmbHot1->setMaximumSize(QSize(70, 25));

        horizontalLayout_2->addWidget(cmbHot1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(15, 15));

        horizontalLayout_2->addWidget(label);

        cmbHot2 = new QComboBox(groupBox);
        cmbHot2->addItem(QString());
        cmbHot2->addItem(QString());
        cmbHot2->addItem(QString());
        cmbHot2->addItem(QString());
        cmbHot2->addItem(QString());
        cmbHot2->addItem(QString());
        cmbHot2->setObjectName(QString::fromUtf8("cmbHot2"));
        cmbHot2->setMaximumSize(QSize(70, 25));

        horizontalLayout_2->addWidget(cmbHot2);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 430, 22));
        menu_file = new QMenu(menubar);
        menu_file->setObjectName(QString::fromUtf8("menu_file"));
        menu_help = new QMenu(menubar);
        menu_help->setObjectName(QString::fromUtf8("menu_help"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_file->menuAction());
        menubar->addAction(menu_help->menuAction());
        menu_file->addAction(actionOpen);
        menu_help->addAction(actionAbout);
        menu_help->addSeparator();
        menu_help->addAction(actionHelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\216\237\347\245\236Music", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\344\273\216\346\226\207\344\273\266\344\270\255\351\200\211\346\213\251", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\345\270\256\345\212\251", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\347\220\264\350\260\261", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\347\220\264\350\260\261\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\344\275\234\350\200\205", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\233\262\345\220\215\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\273\266\346\227\266\357\274\232", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\344\271\220\350\260\261", nullptr));
        cmbSelect->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        cmbSelect->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));

        btnLoadSheet->setText(QCoreApplication::translate("MainWindow", "\350\275\275\345\205\245\347\220\264\350\260\261", nullptr));
        btnSelect->setText(QCoreApplication::translate("MainWindow", "\344\273\216\346\226\207\344\273\266\344\270\255\351\200\211\346\213\251", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\256\217\346\214\211\351\224\256\350\256\276\347\275\256", nullptr));
        btnResetHotkey->setText(QCoreApplication::translate("MainWindow", "\351\207\215\350\256\276\345\256\217\346\214\211\351\224\256", nullptr));
        cmbHot1->setItemText(0, QCoreApplication::translate("MainWindow", "\347\251\272", nullptr));
        cmbHot1->setItemText(1, QCoreApplication::translate("MainWindow", "Ctrl", nullptr));
        cmbHot1->setItemText(2, QCoreApplication::translate("MainWindow", "ALT", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        cmbHot2->setItemText(0, QCoreApplication::translate("MainWindow", "\347\251\272", nullptr));
        cmbHot2->setItemText(1, QCoreApplication::translate("MainWindow", "F6", nullptr));
        cmbHot2->setItemText(2, QCoreApplication::translate("MainWindow", "F7", nullptr));
        cmbHot2->setItemText(3, QCoreApplication::translate("MainWindow", "F8", nullptr));
        cmbHot2->setItemText(4, QCoreApplication::translate("MainWindow", "F9", nullptr));
        cmbHot2->setItemText(5, QCoreApplication::translate("MainWindow", "F10", nullptr));

        menu_file->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_help->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
