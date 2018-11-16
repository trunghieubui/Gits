#pragma once
#include "Services.h"

void service::handle_input_config()
{
	service_father::handle_input_config();
}

void service::handle_output_cash(int cash)
{
	service_father::handle_output_cash(cash);
}

void service::handle_ratio()
{
	ratio_calc = spare_cash / init_cash;
}

void service::setname(QString name_)
{
	name = name_;
}


