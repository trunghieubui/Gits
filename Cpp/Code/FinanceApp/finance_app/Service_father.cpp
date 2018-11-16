#pragma once
#include "Service_father.h"


QString service_father::getname()
{
	return name;
}


unsigned int service_father::get_init_cash()
{
	return init_cash;
}

unsigned int service_father::get_spare_cash()
{
	return spare_cash;
}

unsigned int service_father::get_used_cash()
{
	return used_cash;
}

unsigned int service_father::get_ratio_config()
{
	return ratio_config;
}

unsigned int service_father::get_ratio_calc()
{
	return ratio_calc;
}

QString service_father::get_type()
{
	return type;
}

void service_father::handle_input_config()
{
	init_cash = total_cash * ratio_config / 100;
	spare_cash = init_cash;
}

void service_father::handle_output_cash(int cash)
{

	used_cash = cash;
	spare_cash -= used_cash;
}

void service_father::set_init_cash(int cash)
{
	init_cash = cash;
}

void service_father::set_spare_cash(int cash)
{
	spare_cash = cash;
}

void service_father::set_used_cash(int cash)
{
	used_cash = cash;
}

void service_father::set_note(QString note_)
{
	note = note_;
}

void service_father::set_ratio_config(int ratio)
{
	ratio_config = ratio;
}

void service_father::set_ratio_calc(int ratio)
{
	ratio_calc = ratio;
}

void service_father::set_type(QString type_)
{
	type = type_;
}