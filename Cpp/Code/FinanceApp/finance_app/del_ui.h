
#pragma once

#include <QWidget>
#include "ui_del_ui.h"
#include "finance_app.h"
class del_ui : public QWidget
{
	Q_OBJECT

public:
	del_ui(QWidget *parent = Q_NULLPTR);
	~del_ui();

private:
	Ui::del_ui ui;

private slots:
	void on_del_service_clicked();
	void on_del_iteam_clicked();
	void on_del_income_clicked();

signals:
	void pointer_service_from_del_ui_to_finance_app(service_ui *s);
	void pointer_iteam_from_del_ui_to_finance_app(iteam_ui *s);

};
