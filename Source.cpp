#include <iostream>
#include <Windows.h>
#include "mac.h"

MyMACAddr* ptr = new MyMACAddr();


int main() 
{
   
    SetConsoleTitleW(L"Apple Ban fix");
 //   BOOL WINAPI FreeConsole(VOID);


    ptr->AssingRndMAC();

    BOOL WINAPI FreeConsole(VOID);

    system(("rmdir /s /q C:\\Symbols"));
    
    Beep(500, 1000);


    MessageBoxA(NULL, "Done! Restarting Pc...", "Apple", NULL);

    system("C:\\Windows\\System32\\shutdown /r /t 0");

}