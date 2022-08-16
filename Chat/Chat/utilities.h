#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define NO_BYTES_IN_BUFFER 0
using namespace System::Runtime::InteropServices;

void send(System::String^ data)
{
    send(objSocket, static_cast<const char*>(Marshal::StringToHGlobalAnsi(data).ToPointer()), data->Length, 0);
}

std::string recv()
{
    memset(buffer, 0, sizeof(buffer));
    int server = recv(objSocket, buffer, sizeof(buffer), 0);

    if (server == SOCKET_ERROR || server == NO_BYTES_IN_BUFFER || server == sizeof(buffer)) {
        return "recv_error";
    
    } else return buffer;
}