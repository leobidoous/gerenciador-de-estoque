/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionE_xit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QLabel *label_Code;
    QLineEdit *lineEdit_Code;
    QLabel *label_Preco;
    QLineEdit *lineEdit_Preco;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Status;
    QLabel *label_dbStatus;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Connect;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Insert;
    QPushButton *pushButton_Remove;
    QPushButton *pushButton_List;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_Close;
    QMenuBar *menuBar;
    QMenu *menu_FILE;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(683, 498);
        MainWindow->setMinimumSize(QSize(683, 498));
        MainWindow->setMaximumSize(QSize(683, 498));
        MainWindow->setStyleSheet(QLatin1String("background: rgba(255, 255, 255, 1);\n"
"color: black;"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Name = new QLabel(groupBox);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        horizontalLayout_3->addWidget(label_Name);

        lineEdit_Name = new QLineEdit(groupBox);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));

        horizontalLayout_3->addWidget(lineEdit_Name);

        label_Code = new QLabel(groupBox);
        label_Code->setObjectName(QStringLiteral("label_Code"));

        horizontalLayout_3->addWidget(label_Code);

        lineEdit_Code = new QLineEdit(groupBox);
        lineEdit_Code->setObjectName(QStringLiteral("lineEdit_Code"));

        horizontalLayout_3->addWidget(lineEdit_Code);

        label_Preco = new QLabel(groupBox);
        label_Preco->setObjectName(QStringLiteral("label_Preco"));

        horizontalLayout_3->addWidget(label_Preco);

        lineEdit_Preco = new QLineEdit(groupBox);
        lineEdit_Preco->setObjectName(QStringLiteral("lineEdit_Preco"));
        lineEdit_Preco->setEnabled(true);
        lineEdit_Preco->setMouseTracking(true);

        horizontalLayout_3->addWidget(lineEdit_Preco);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(tableView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_Status = new QLabel(groupBox);
        label_Status->setObjectName(QStringLiteral("label_Status"));

        horizontalLayout_4->addWidget(label_Status);

        label_dbStatus = new QLabel(groupBox);
        label_dbStatus->setObjectName(QStringLiteral("label_dbStatus"));
        label_dbStatus->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(label_dbStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_Connect = new QPushButton(groupBox);
        pushButton_Connect->setObjectName(QStringLiteral("pushButton_Connect"));

        horizontalLayout->addWidget(pushButton_Connect);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Insert = new QPushButton(groupBox);
        pushButton_Insert->setObjectName(QStringLiteral("pushButton_Insert"));

        horizontalLayout->addWidget(pushButton_Insert);

        pushButton_Remove = new QPushButton(groupBox);
        pushButton_Remove->setObjectName(QStringLiteral("pushButton_Remove"));

        horizontalLayout->addWidget(pushButton_Remove);

        pushButton_List = new QPushButton(groupBox);
        pushButton_List->setObjectName(QStringLiteral("pushButton_List"));

        horizontalLayout->addWidget(pushButton_List);

        pushButton_Clear = new QPushButton(groupBox);
        pushButton_Clear->setObjectName(QStringLiteral("pushButton_Clear"));

        horizontalLayout->addWidget(pushButton_Clear);

        pushButton_Close = new QPushButton(groupBox);
        pushButton_Close->setObjectName(QStringLiteral("pushButton_Close"));

        horizontalLayout->addWidget(pushButton_Close);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 683, 19));
        menu_FILE = new QMenu(menuBar);
        menu_FILE->setObjectName(QStringLiteral("menu_FILE"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu_FILE->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menu_FILE->addAction(actionE_xit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Product Register", Q_NULLPTR));
        actionE_xit->setText(QApplication::translate("MainWindow", "E&xit", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Product Register", Q_NULLPTR));
        label_Name->setText(QApplication::translate("MainWindow", "Nome", Q_NULLPTR));
        lineEdit_Name->setPlaceholderText(QApplication::translate("MainWindow", "Product Name Here", Q_NULLPTR));
        label_Code->setText(QApplication::translate("MainWindow", "C\303\263digo", Q_NULLPTR));
        lineEdit_Code->setPlaceholderText(QApplication::translate("MainWindow", "1763726928", Q_NULLPTR));
        label_Preco->setText(QApplication::translate("MainWindow", "Pre\303\247o", Q_NULLPTR));
        lineEdit_Preco->setPlaceholderText(QApplication::translate("MainWindow", "$0.00", Q_NULLPTR));
        label_Status->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
        label_dbStatus->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\"background-color: red; color:white;\"> [!] Database not connected </span></p></body></html>", Q_NULLPTR));
        pushButton_Connect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        pushButton_Insert->setText(QApplication::translate("MainWindow", "Insert", Q_NULLPTR));
        pushButton_Remove->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        pushButton_List->setText(QApplication::translate("MainWindow", "List", Q_NULLPTR));
        pushButton_Clear->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        pushButton_Close->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        menu_FILE->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
