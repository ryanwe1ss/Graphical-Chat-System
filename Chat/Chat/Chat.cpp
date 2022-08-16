#include <string>
#include <winsock2.h>
#pragma comment(lib, "Ws2_32.lib")

SOCKET objSocket;
char buffer[65535];
std::string data;

#include "utilities.h"
#include "Chat.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Chat::Chat form;
	Application::Run(% form);
}