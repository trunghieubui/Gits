#pragma once
#include "ui_menu_ui.h"
#include "finance_app.h"

//class add_ui;
class add_service_ui;
class iteam_ui;
class income_ui;

class menu_ui : public QWidget
{
	Q_OBJECT

public:
	menu_ui(QWidget *parent = Q_NULLPTR);
	~menu_ui();

private:
	Ui::menu_ui ui;
	void handle_create_interface();
	

private slots:
	void onTabChanged(int index);
	void onIteamAddClicked();
	void onIteamDelClicked();
	void onIteamSearchClicked();


	void onServiceAddClicked();
	void onServiceDelClicked();
	void onServiceSearchClicked();

	void onIncomeAddClicked();
	void onIncomeDelClicked();
	void onIncomeSearchClicked();

	//void on_del_button_clicked();
	//void on_search_button_clicked();
	//void on_sort_button_clicked();
	//void on_pointer_service_from_add_ui_to_menu_ui(add_service_ui *s);
	//void on_pointer_iteam_from_add_ui_to_menu_ui(iteam_ui *s);
	//void on_pointer_income_from_add_ui_to_menu_ui(income_ui *s);



signals:
	void currentChanged(int index);
	void clicked();
	void pointer_service_from_menu_ui_to_finance_app(add_service_ui *s);
	void pointer_iteam_from_menu_ui_to_finance_app(iteam_ui *s);
	void pointer_income_from_menu_ui_to_finance_app(income_ui *s);
};
