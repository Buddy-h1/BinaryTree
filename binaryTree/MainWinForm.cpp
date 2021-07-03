#include "MainWinForm.h"
#include "Windows.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	binaryTree::MainWinForm mainForm;
	Application::Run(% mainForm);
}