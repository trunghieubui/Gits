#include "income.h"

void income::set_cash(int cash_in)
{
	cash = cash_in;
}

void income::set_name(QString name_in)
{
	name_cash = name_in;
}

QString income::get_name()
{
	return name_cash;
}

int income::get_cash()
{
	return cash;
}
