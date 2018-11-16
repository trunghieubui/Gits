/********************************************************************************
** Form generated from reading UI file 'add_service_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_SERVICE_UI_H
#define UI_ADD_SERVICE_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_service_ui
{
public:
    QPushButton *cancelButton;
    QPushButton *okButton;
    QTableWidget *services_tab_2;
    QComboBox *income_name;

    void setupUi(QWidget *add_service_ui)
    {
        if (add_service_ui->objectName().isEmpty())
            add_service_ui->setObjectName(QStringLiteral("add_service_ui"));
        add_service_ui->resize(246, 170);
        cancelButton = new QPushButton(add_service_ui);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(140, 50, 101, 31));
        cancelButton->setStyleSheet(QLatin1String("#cancelButton{\n"
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
        okButton = new QPushButton(add_service_ui);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(140, 10, 101, 31));
        okButton->setStyleSheet(QLatin1String("#okButton{\n"
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
        services_tab_2 = new QTableWidget(add_service_ui);
        if (services_tab_2->columnCount() < 2)
            services_tab_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        services_tab_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        services_tab_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (services_tab_2->rowCount() < 1)
            services_tab_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        services_tab_2->setVerticalHeaderItem(0, __qtablewidgetitem2);
        services_tab_2->setObjectName(QStringLiteral("services_tab_2"));
        services_tab_2->setGeometry(QRect(10, 90, 231, 71));
        services_tab_2->setStyleSheet(QLatin1String("#services_tab_2{\n"
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
        income_name = new QComboBox(add_service_ui);
        income_name->setObjectName(QStringLiteral("income_name"));
        income_name->setGeometry(QRect(10, 10, 111, 31));
        income_name->setStyleSheet(QLatin1String("#service_name{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color:rgb(255, 255, 255);\n"
"}"));

        retranslateUi(add_service_ui);

        QMetaObject::connectSlotsByName(add_service_ui);
    } // setupUi

    void retranslateUi(QWidget *add_service_ui)
    {
        add_service_ui->setWindowTitle(QApplication::translate("add_service_ui", "add_service_ui", 0));
        cancelButton->setText(QApplication::translate("add_service_ui", "Cancel", 0));
        okButton->setText(QApplication::translate("add_service_ui", "OK", 0));
        QTableWidgetItem *___qtablewidgetitem = services_tab_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("add_service_ui", "Name ", 0));
        QTableWidgetItem *___qtablewidgetitem1 = services_tab_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("add_service_ui", "(%)", 0));
    } // retranslateUi

};

namespace Ui {
    class add_service_ui: public Ui_add_service_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_SERVICE_UI_H
