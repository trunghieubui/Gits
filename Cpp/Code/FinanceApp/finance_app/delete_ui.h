#pragma once
#include "service_ui.h"
#include <QWidget>
#include "ui_delete_ui.h"

class delete_ui : public QWidget
{
	Q_OBJECT

public:
	delete_ui(QWidget *parent = Q_NULLPTR);
	~delete_ui();

private:
	Ui::delete_ui ui;
	void handle_interface_delete_ui();

private slots:
	void on_okButton_clicked();

signals:
	void signal_choose_service_to_delete_in_delete_ui(QString);
};
