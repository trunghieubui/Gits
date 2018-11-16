#include "main_interface.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array < String^>^ args)
{
	Console::WriteLine(L"Hello world");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	finance::main_interface form;
	Application::Run(%form);
}
