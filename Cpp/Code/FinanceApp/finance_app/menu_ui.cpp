#include "menu_ui.h"

menu_ui::menu_ui(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	handle_create_interface();
	connect(ui.menu_tab, SIGNAL(currentChanged(int)), this, SLOT(onTabChanged(int)));

	//iteam
	connect(ui.iteam_add_button, SIGNAL(clicked()), this, SLOT(onIteamAddClicked()));
	connect(ui.iteam_del_button, SIGNAL(clicked()), this, SLOT(onIteamDelClicked()));
	connect(ui.iteam_search_button, SIGNAL(clicked()), this, SLOT(onIteamSearchClicked()));

	//service
	connect(ui.service_add_button, SIGNAL(clicked()), this, SLOT(onServiceAddClicked()));
	connect(ui.service_del_button, SIGNAL(clicked()), this, SLOT(onServiceDelClicked()));
	connect(ui.service_search_button, SIGNAL(clicked()), this, SLOT(onServiceSearchClicked()));

	//income
	connect(ui.income_add_button, SIGNAL(clicked()), this, SLOT(onIncomeAddClicked()));
	connect(ui.income_del_button, SIGNAL(clicked()), this, SLOT(onIncomeDelClicked()));
	connect(ui.income_search_button, SIGNAL(clicked()), this, SLOT(onIncomeSearchClicked()));
}

menu_ui::~menu_ui()
{
}

//-------------------------Iteam--------------------------//
void menu_ui::onIteamAddClicked()
{
	qInfo() << "add button";
	iteam_ui *i = new iteam_ui;
	emit this->pointer_iteam_from_menu_ui_to_finance_app(i);
	i->showNormal();
	this->close();
}


void menu_ui::onIteamDelClicked()
{
	qInfo() << "del button";
}

void menu_ui::onIteamSearchClicked()
{
	qInfo() << "search button";
}

//------------------------------------------------------//

//-------------------------Service--------------------------//
void menu_ui::onServiceAddClicked()
{
	qInfo() << "add button";
	add_service_ui *a = new add_service_ui;
	emit this->pointer_service_from_menu_ui_to_finance_app(a);
	a->showNormal();
	this->close();
}


void menu_ui::onServiceDelClicked()
{
	qInfo() << "del button";
}

void menu_ui::onServiceSearchClicked()
{
	qInfo() << "search button";
}

//------------------------------------------------------//

//-------------------------income--------------------------//
void menu_ui::onIncomeAddClicked()
{
	qInfo() << "add button";
	income_ui *a = new income_ui;
	emit this->pointer_income_from_menu_ui_to_finance_app(a);
	a->showNormal();
	this->close();
}


void menu_ui::onIncomeDelClicked()
{
	qInfo() << "del button";
}

void menu_ui::onIncomeSearchClicked()
{
	qInfo() << "search button";
}

//------------------------------------------------------//


void menu_ui::handle_create_interface()
{
	ui.menu_tab->setTabText(0, QString("Iteam"));
	ui.menu_tab->setTabText(1, QString("Service"));
	ui.menu_tab->setTabText(2, QString("Income"));
}


void menu_ui::onTabChanged(int index)
{
	qInfo() << "tab bar: " << index;
	
}

/*void menu_ui::on_pointer_service_from_add_ui_to_menu_ui(add_service_ui *s)
{
	emit this->pointer_service_from_menu_ui_to_finance_app(s);
}


void menu_ui::on_pointer_iteam_from_add_ui_to_menu_ui(iteam_ui *i)
{
	emit this->pointer_iteam_from_menu_ui_to_finance_app(i);
}

void menu_ui::on_pointer_income_from_add_ui_to_menu_ui(income_ui *in)
{
	emit this->pointer_income_from_menu_ui_to_finance_app(in);
}*/
