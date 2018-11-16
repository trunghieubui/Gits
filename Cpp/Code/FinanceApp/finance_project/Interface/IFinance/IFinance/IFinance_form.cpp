#include "IFinance_form.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main(array < String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(0);
	IFinance::IFinance_form form;
	Application::Run(%form);
}
