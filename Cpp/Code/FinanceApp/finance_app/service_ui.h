#pragma once

#include "ui_service_ui.h"

#include "finance_app.h"

class service_ui : public QWidget
{
	Q_OBJECT

public:
	service_ui(QWidget *parent = Q_NULLPTR);
	~service_ui();

private:
	Ui::service_ui ui;
	service_father *get_data_from_service_ui();

private slots:
	void on_okButton_clicked();
	void on_cancelButton_clicked();
	//void on_Change();

signals:
	void data_from_service_ui_to_finance_ui(service_father * x);
};

