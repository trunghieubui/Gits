#pragma once

#include <QWidget>
#include "ui_income_ui.h"
#include "finance_app.h"

class income;

class income_ui : public QWidget
{
	Q_OBJECT

public:
	income_ui(QWidget *parent = Q_NULLPTR);
	~income_ui();

private:
	Ui::income_ui ui;
	void handle_create_interface();
	void handle_show_to_modify(income *in);
	income *get_data_from_income_ui();

private slots:
	void on_okButton_clicked();
	void on_pointer_data_income_to_income_ui_in_modAction(income *in);
	//void on_cancelButton_clicked();

signals:
	void data_from_income_ui_to_finance_ui(income * in);
};
