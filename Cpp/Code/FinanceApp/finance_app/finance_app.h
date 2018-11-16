#pragma once
#include "ui_finance_app.h"
#include "iteam_ui.h"
#include "service_ui.h"
#include "delete_ui.h"
#include "add_ui.h"
#include "del_ui.h"
#include "add_service_ui.h"
#include "income_ui.h"
#include "menu_ui.h"

#include <QSplitter>
#include <QStandardItemModel>
#include <QTreeView>
#include <QListView>
#include <QTableView>
#include <QDirModel>

#include "Iteam.h"
#include "Services.h"
#include "income.h"

using namespace std;



#define OPEN 1
#define NOOPEN 0
class finance_app : public QMainWindow
{
	Q_OBJECT

public:
	finance_app(QWidget *parent = Q_NULLPTR);
	
	void handle_create_serive_table_db();
	void handle_create_iteam_table_db();
	void handle_create_income_table_db();
	//------------------------Services------------------------
	void handle_write_one_sevice_to_db(service_father *x);
	void handle_write_one_income_to_db(income *x);
	void handle_write_all_services_to_db(vector <service_father *>);
	service_father *handle_read_one_service_database(QString name);
	vector <service_father *> handle_read_all_services_in_db();
	vector <iteam *> handle_read_all_iteams_in_db();
	income *handle_read_one_income_database(QString name);
	void handle_delete_one_service_from_db(QString name);
	void handle_delete_one_income_from_db(QString name);
	void handle_delete_one_iteam_from_db(QString name);
	void handle_delete_all_services_from_db();
	void handle_delete_all_iteams_from_db();
	iteam * handle_read_one_iteam_database(QString name);
	vector <income *> handle_read_all_incomes_database();

	//void handle_read_all_service_db();

	//------------------------Iteams------------------------
	void handle_write_one_iteam_to_db(iteam *y);
	void handle_write_all_iteams_to_db(vector <iteam *>y);

	

private:
	Ui::finance_appClass ui;
	void handle_create_interface();
	void handle_display_service(vector <service_father *> x);
	void handle_display_iteam(vector <iteam *> x);
	void handle_display_income(vector <income *> x);
	int handle_check_input_service();
	int handle_check_input_iteam();
	vector <service_father *> handle_get_all_services_from_interface();
	service_father *handle_get_one_service_from_interface();
	void handle_show_the_next_service_to_interface(service_father *x);
	void handle_show_the_next_iteam_to_interface(iteam *x);
	vector <iteam *> handle_get_all_iteams_from_interface();
	vector <service_father *> handle_calculator_all_services_and_not_save_to_db(vector <service_father *> list_services, vector <iteam *> list_iteams);
	void handle_calculator_one_service_and_save_to_db(iteam *x);
	void handle_reload_all_services_to_interface();
	void handle_reload_one_service_to_interface();
	void handle_reload_all_incomes_to_interface();
	void handle_treeview();
	void setupTreeItems();

	//void handle_get_iteam_from_interface();

	QProgressBar * handle_QProgressBar_service(service_father *x);

private slots:
	//void on_add_iteam_clicked();
	//void on_add_service_clicked();
	//void on_ok_clicked();
	void on_cancel_clicked();
	//void on_add_button_clicked();
	//void on_delete_button_clicked();
	void on_menu_button_clicked();


	//void cellSelected(int nRow, int nCol);
	void on_data_from_service_ui_to_finance_ui(service_father *x);
	void on_data_from_iteam_ui_to_finance_ui(iteam * x);
	void on_data_from_income_ui_to_finance_ui(income *in);

	void on_pointer_service_from_menu_ui_to_finance_app(add_service_ui *s);
	void on_pointer_iteam_from_menu_ui_to_finance_app(iteam_ui *i);
	void on_pointer_income_from_menu_ui_to_finance_app(income_ui *in);


	//void on_delete_Button_clicked();
	void get_data_from_delete_ui(QString x);
	void doubleClick_in_incomeTable(int x, int y);
	void menu_action_for_income(QPoint position); 
	void menu_action_for_iteam(QPoint position);
	void menu_action_for_service(QPoint position);


	void addIncomeAction();
	void delIncomeAction();
	void modIncomeAction();


	void addIteamAction();
	void delIteamAction();
	//void sortIteamAction();
	void modIteamAction();

	void addServiceAction();
	void delServiceAction();
	//void sortServiceAction();
	//void modServiceAction();
	
signals:
	void pointer_data_service_to_modAction(service_father *s);
	void pointer_data_iteam_to_modAction(iteam *s);
	void pointer_data_income_to_income_ui_in_modAction(income *s);
	void pointer_service_to_finance_app(add_service_ui *s);
};
