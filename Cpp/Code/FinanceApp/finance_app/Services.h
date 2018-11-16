#pragma once
#include "Service_father.h"
class service : public service_father
{

public:
	void handle_input_config();

	void handle_output_cash(int cash);


	void handle_ratio();

	void setname(QString name_);

	/*void set_init_cash(int cash);
	void set_spare_cash(int cash);
	void set_used_cash(int cash);
	void set_note(string note_);

	QString getname();
	int get_init_cash();
	int get_spare_cash();
	int get_used_cash();*/

};

