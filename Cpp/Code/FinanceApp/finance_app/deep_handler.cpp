#pragma once
#include"finance_app.h"

vector <service_father *> finance_app::handle_calculator_all_services_and_not_save_to_db(vector <service_father *> list_services, vector <iteam *> list_iteams)
{
	int i, j;
	// check if services and iteams is existed
	if ((list_services.size() != 0) && (list_iteams.size() != 0)) {
		for (i = 0; i < list_services.size(); i++) {
			for (j = 0; j < list_iteams.size(); j++) {
				if (list_services[i]->getname().compare(list_iteams[j]->get_name_service()) == 0) {
					list_services[i]->set_used_cash(list_services[i]->get_used_cash() + list_iteams[j]->get_cash_out());
					list_services[i]->set_spare_cash(list_services[i]->get_init_cash() - list_services[i]->get_used_cash());
				}
			}
		}
	}

	return list_services;
}

void finance_app::handle_calculator_one_service_and_save_to_db(iteam *i)
{
	service_father * x;
	float rate;
	float sc, ic;

	

	// calculate service
	x = handle_read_one_service_database(i->get_name_service());
	x->set_used_cash(x->get_used_cash() + i->get_cash_out());
	x->set_spare_cash(x->get_init_cash() - x->get_used_cash());
	x->set_ratio_calc((x->get_used_cash() * 100) / x->get_init_cash());

	// delete a existed service in db
	handle_delete_one_service_from_db(i->get_name_service());
	// save this service to db
	handle_write_one_sevice_to_db(x);
}