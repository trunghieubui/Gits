#pragma once

#include "finance_app.h"
#include "ui_add_ui.h"

class service_ui;
class iteam_ui;
class add_service_ui;
class income_ui;


class add_ui : public QWidget
{
	Q_OBJECT

public:
	add_ui(QWidget *parent = Q_NULLPTR);
	~add_ui();

private:
	Ui::add_ui ui;

private slots:
	void on_add_service_clicked();
	void on_add_iteam_clicked();
	void on_add_income_clicked();

signals:
	void pointer_service_from_add_ui_to_menu_ui(add_service_ui *s);
	void pointer_iteam_from_add_ui_to_menu_ui(iteam_ui *s);
	void pointer_income_from_add_ui_to_menu_ui(income_ui *in);
};
