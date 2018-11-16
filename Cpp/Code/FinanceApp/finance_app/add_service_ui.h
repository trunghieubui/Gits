#pragma once
#include <QWidget>
#include "ui_add_service_ui.h"
#include "finance_app.h"
class add_service_ui : public QWidget
{
	Q_OBJECT

public:
	add_service_ui(QWidget *parent = Q_NULLPTR);
	~add_service_ui();

private:
	Ui::add_service_ui ui;
	service_father *get_data_from_service_ui();
	void handle_create_interface();

private slots:
	void on_okButton_clicked();
	void on_cancelButton_clicked();
	//void on_Change();

signals:
	void data_from_service_ui_to_finance_ui(service_father * x);
};
