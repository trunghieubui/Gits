#include "income_ui.h"

income_ui::income_ui(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	handle_create_interface();
}

income_ui::~income_ui()
{
}

void income_ui::handle_create_interface()
{
	ui.income_tab->horizontalHeader()->setStretchLastSection(true);
}

income * income_ui::get_data_from_income_ui()
{
	income *x;
	x = new income;
	x->set_name(ui.income_tab->item(0, 0)->text());
	x->set_cash(ui.income_tab->item(1, 0)->text().toInt());

	return x;
}

void income_ui::handle_show_to_modify(income *in)
{
	ui.income_tab->setItem(0, 0, new QTableWidgetItem(in->get_name()));
	ui.income_tab->setItem(0, 1, new QTableWidgetItem(QString::number(in->get_cash())));
}

void income_ui::on_okButton_clicked()
{
	qInfo() << "you click ok in income_ui";
	emit this->data_from_income_ui_to_finance_ui(get_data_from_income_ui());
	this->close();
}

void income_ui::on_pointer_data_income_to_income_ui_in_modAction(income *in)
{
	qInfo() << in->get_name();
	qInfo() << in->get_cash();
	handle_show_to_modify(in);

}