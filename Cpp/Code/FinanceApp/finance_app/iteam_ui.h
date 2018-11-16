#pragma once
#include"Iteam.h"
#include "Services.h"
#include <QList>
#include <QString>
#include <QtSql>
#include <QtWidgets/QMainWindow>
#include<iostream>
#include<string>
#include <QWidget>
#include "ui_iteam_ui.h"
#include <QtWidgets/QMainWindow>
#include<iostream>
#include<string>
#include <QWidget>
#include "finance_app.h"
class iteam_ui : public QWidget
{
	Q_OBJECT

public:
	iteam_ui(QWidget *parent = Q_NULLPTR);
	~iteam_ui();

private:
	Ui::iteam_ui ui;
	void handle_create_interface();
	iteam * handle_get_data_from_iteam_ui();

private slots:
	void on_okButton_clicked();
signals:
	void signal_to_get_iteam_in_iteam_ui(iteam *);
	
};
