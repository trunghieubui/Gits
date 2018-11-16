/********************************************************************************
** Form generated from reading UI file 'iteam.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEAM_H
#define UI_ITEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTableWidget *iteams_tab_2;
    QPushButton *cancelButton_2;
    QPushButton *okButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(294, 213);
        iteams_tab_2 = new QTableWidget(Dialog);
        if (iteams_tab_2->columnCount() < 1)
            iteams_tab_2->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        iteams_tab_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (iteams_tab_2->rowCount() < 5)
            iteams_tab_2->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        iteams_tab_2->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        iteams_tab_2->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        iteams_tab_2->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        iteams_tab_2->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        iteams_tab_2->setVerticalHeaderItem(4, __qtablewidgetitem5);
        iteams_tab_2->setObjectName(QStringLiteral("iteams_tab_2"));
        iteams_tab_2->setGeometry(QRect(10, 20, 171, 181));
        cancelButton_2 = new QPushButton(Dialog);
        cancelButton_2->setObjectName(QStringLiteral("cancelButton_2"));
        cancelButton_2->setGeometry(QRect(200, 60, 81, 31));
        okButton = new QPushButton(Dialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(200, 20, 81, 31));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = iteams_tab_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog", "Infomation", 0));
        QTableWidgetItem *___qtablewidgetitem1 = iteams_tab_2->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog", "Service", 0));
        QTableWidgetItem *___qtablewidgetitem2 = iteams_tab_2->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("Dialog", "Iteam", 0));
        QTableWidgetItem *___qtablewidgetitem3 = iteams_tab_2->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("Dialog", "Spend cash", 0));
        QTableWidgetItem *___qtablewidgetitem4 = iteams_tab_2->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("Dialog", "Date", 0));
        QTableWidgetItem *___qtablewidgetitem5 = iteams_tab_2->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("Dialog", "Note", 0));
        cancelButton_2->setText(QApplication::translate("Dialog", "Cancel", 0));
        okButton->setText(QApplication::translate("Dialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEAM_H
