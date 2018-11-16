/********************************************************************************
** Form generated from reading UI file 'service_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICE_UI_H
#define UI_SERVICE_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_service_ui
{
public:
    QTableWidget *services_tab_2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *service_ui)
    {
        if (service_ui->objectName().isEmpty())
            service_ui->setObjectName(QStringLiteral("service_ui"));
        service_ui->resize(279, 147);
        services_tab_2 = new QTableWidget(service_ui);
        if (services_tab_2->columnCount() < 1)
            services_tab_2->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        services_tab_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (services_tab_2->rowCount() < 3)
            services_tab_2->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        services_tab_2->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        services_tab_2->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        services_tab_2->setVerticalHeaderItem(2, __qtablewidgetitem3);
        services_tab_2->setObjectName(QStringLiteral("services_tab_2"));
        services_tab_2->setGeometry(QRect(10, 10, 151, 131));
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
        okButton = new QPushButton(service_ui);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(170, 70, 101, 31));
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
        cancelButton = new QPushButton(service_ui);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(170, 110, 101, 31));
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

        retranslateUi(service_ui);

        QMetaObject::connectSlotsByName(service_ui);
    } // setupUi

    void retranslateUi(QWidget *service_ui)
    {
        service_ui->setWindowTitle(QApplication::translate("service_ui", "service_ui", 0));
        QTableWidgetItem *___qtablewidgetitem = services_tab_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("service_ui", "Information", 0));
        QTableWidgetItem *___qtablewidgetitem1 = services_tab_2->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("service_ui", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem2 = services_tab_2->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("service_ui", "Total", 0));
        QTableWidgetItem *___qtablewidgetitem3 = services_tab_2->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("service_ui", "(%)", 0));
        okButton->setText(QApplication::translate("service_ui", "OK", 0));
        cancelButton->setText(QApplication::translate("service_ui", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class service_ui: public Ui_service_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICE_UI_H
