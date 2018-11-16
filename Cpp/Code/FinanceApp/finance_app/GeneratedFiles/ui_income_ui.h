/********************************************************************************
** Form generated from reading UI file 'income_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOME_UI_H
#define UI_INCOME_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_income_ui
{
public:
    QPushButton *okButton;
    QPushButton *cancelButton;
    QTableWidget *income_tab;

    void setupUi(QWidget *income_ui)
    {
        if (income_ui->objectName().isEmpty())
            income_ui->setObjectName(QStringLiteral("income_ui"));
        income_ui->resize(299, 120);
        okButton = new QPushButton(income_ui);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(190, 40, 101, 31));
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
        cancelButton = new QPushButton(income_ui);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(190, 80, 101, 31));
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
        income_tab = new QTableWidget(income_ui);
        if (income_tab->columnCount() < 1)
            income_tab->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        income_tab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (income_tab->rowCount() < 2)
            income_tab->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        income_tab->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        income_tab->setVerticalHeaderItem(1, __qtablewidgetitem2);
        income_tab->setObjectName(QStringLiteral("income_tab"));
        income_tab->setGeometry(QRect(10, 10, 171, 101));
        income_tab->setStyleSheet(QLatin1String("#income_tab{\n"
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

        retranslateUi(income_ui);

        QMetaObject::connectSlotsByName(income_ui);
    } // setupUi

    void retranslateUi(QWidget *income_ui)
    {
        income_ui->setWindowTitle(QApplication::translate("income_ui", "income_ui", 0));
        okButton->setText(QApplication::translate("income_ui", "OK", 0));
        cancelButton->setText(QApplication::translate("income_ui", "Cancel", 0));
        QTableWidgetItem *___qtablewidgetitem = income_tab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("income_ui", "Information", 0));
        QTableWidgetItem *___qtablewidgetitem1 = income_tab->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("income_ui", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem2 = income_tab->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("income_ui", "Income", 0));
    } // retranslateUi

};

namespace Ui {
    class income_ui: public Ui_income_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOME_UI_H
