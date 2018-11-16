/********************************************************************************
** Form generated from reading UI file 'finance_app.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCE_APP_H
#define UI_FINANCE_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finance_appClass
{
public:
    QWidget *centralWidget;
    QListWidget *total_view;
    QListWidget *used_view;
    QListWidget *spare_view;
    QPushButton *cancel;
    QLineEdit *status;
    QTableWidget *income;
    QTableWidget *services_tab;
    QPushButton *menu_button;
    QTableWidget *iteams_tab;
    QTreeView *treeView;
    QTreeWidget *treeWidget;
    QTableWidget *tableWidget;
    QCalendarWidget *calendarWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *finance_appClass)
    {
        if (finance_appClass->objectName().isEmpty())
            finance_appClass->setObjectName(QStringLiteral("finance_appClass"));
        finance_appClass->resize(1109, 896);
        centralWidget = new QWidget(finance_appClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        total_view = new QListWidget(centralWidget);
        total_view->setObjectName(QStringLiteral("total_view"));
        total_view->setGeometry(QRect(260, 10, 161, 31));
        total_view->setStyleSheet(QLatin1String("#total_view{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"border-radius: 13px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color:rgb(70, 211, 211);\n"
"}"));
        used_view = new QListWidget(centralWidget);
        used_view->setObjectName(QStringLiteral("used_view"));
        used_view->setGeometry(QRect(630, 10, 171, 31));
        used_view->setStyleSheet(QLatin1String("#used_view{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"border-radius: 13px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color:rgb(70, 211, 211);\n"
"}"));
        spare_view = new QListWidget(centralWidget);
        spare_view->setObjectName(QStringLiteral("spare_view"));
        spare_view->setGeometry(QRect(440, 10, 171, 31));
        spare_view->setStyleSheet(QLatin1String("#spare_view{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"border-radius: 13px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color:rgb(70, 211, 211);\n"
"}"));
        cancel = new QPushButton(centralWidget);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(140, 50, 111, 31));
        cancel->setStyleSheet(QLatin1String("#cancel{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"border-radius: 13px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color:rgb(255, 0, 0);\n"
"}"));
        status = new QLineEdit(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(10, 10, 241, 31));
        status->setStyleSheet(QLatin1String("#status{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"border-radius: 13px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color: rgb(255,255,255);\n"
"}"));
        income = new QTableWidget(centralWidget);
        if (income->columnCount() < 2)
            income->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        income->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        income->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (income->rowCount() < 1)
            income->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        income->setVerticalHeaderItem(0, __qtablewidgetitem2);
        income->setObjectName(QStringLiteral("income"));
        income->setGeometry(QRect(10, 90, 241, 191));
        income->setStyleSheet(QLatin1String("#income{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"border-radius: 13px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color:rgb(85, 170, 255);\n"
"}"));
        services_tab = new QTableWidget(centralWidget);
        if (services_tab->columnCount() < 7)
            services_tab->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        services_tab->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        services_tab->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        services_tab->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        services_tab->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        services_tab->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        services_tab->setHorizontalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        services_tab->setHorizontalHeaderItem(6, __qtablewidgetitem9);
        services_tab->setObjectName(QStringLiteral("services_tab"));
        services_tab->setGeometry(QRect(10, 290, 791, 221));
        services_tab->setStyleSheet(QLatin1String("#services_tab{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"border-radius: 13px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color:rgb(85, 170, 255);\n"
"}"));
        menu_button = new QPushButton(centralWidget);
        menu_button->setObjectName(QStringLiteral("menu_button"));
        menu_button->setGeometry(QRect(10, 50, 111, 31));
        menu_button->setStyleSheet(QLatin1String("#menu_button{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"border-radius: 13px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color: rgb(85, 255, 0);\n"
"}"));
        iteams_tab = new QTableWidget(centralWidget);
        if (iteams_tab->columnCount() < 5)
            iteams_tab->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        iteams_tab->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        iteams_tab->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        iteams_tab->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        iteams_tab->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        iteams_tab->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        iteams_tab->setObjectName(QStringLiteral("iteams_tab"));
        iteams_tab->setGeometry(QRect(260, 50, 541, 231));
        iteams_tab->setStyleSheet(QLatin1String("#iteams_tab{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"border-radius: 13px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color:rgb(85, 170, 255);\n"
"}"));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(810, 10, 291, 271));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(810, 290, 291, 221));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 530, 256, 192));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(790, 520, 312, 183));
        finance_appClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(finance_appClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1109, 21));
        finance_appClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(finance_appClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        finance_appClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(finance_appClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        finance_appClass->setStatusBar(statusBar);
        QWidget::setTabOrder(total_view, used_view);
        QWidget::setTabOrder(used_view, spare_view);

        retranslateUi(finance_appClass);

        QMetaObject::connectSlotsByName(finance_appClass);
    } // setupUi

    void retranslateUi(QMainWindow *finance_appClass)
    {
        finance_appClass->setWindowTitle(QApplication::translate("finance_appClass", "finance_app", 0));
        cancel->setText(QApplication::translate("finance_appClass", "CANCEL", 0));
        QTableWidgetItem *___qtablewidgetitem = income->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("finance_appClass", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = income->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("finance_appClass", "Total", 0));
        QTableWidgetItem *___qtablewidgetitem2 = services_tab->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("finance_appClass", "Service", 0));
        QTableWidgetItem *___qtablewidgetitem3 = services_tab->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("finance_appClass", "Ratio (%)", 0));
        QTableWidgetItem *___qtablewidgetitem4 = services_tab->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("finance_appClass", "Init cash", 0));
        QTableWidgetItem *___qtablewidgetitem5 = services_tab->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("finance_appClass", "Used cash", 0));
        QTableWidgetItem *___qtablewidgetitem6 = services_tab->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("finance_appClass", "Spare cash", 0));
        QTableWidgetItem *___qtablewidgetitem7 = services_tab->horizontalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("finance_appClass", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem8 = services_tab->horizontalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("finance_appClass", "Rate (%)", 0));
        menu_button->setText(QApplication::translate("finance_appClass", "MENU", 0));
        QTableWidgetItem *___qtablewidgetitem9 = iteams_tab->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("finance_appClass", "Service", 0));
        QTableWidgetItem *___qtablewidgetitem10 = iteams_tab->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("finance_appClass", "Iteam", 0));
        QTableWidgetItem *___qtablewidgetitem11 = iteams_tab->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("finance_appClass", "Spend ", 0));
        QTableWidgetItem *___qtablewidgetitem12 = iteams_tab->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("finance_appClass", "Date", 0));
        QTableWidgetItem *___qtablewidgetitem13 = iteams_tab->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QApplication::translate("finance_appClass", "Note", 0));
    } // retranslateUi

};

namespace Ui {
    class finance_appClass: public Ui_finance_appClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCE_APP_H
