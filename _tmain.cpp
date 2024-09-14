#include<iostream>
#include<tchar.h>
#include<windows.h>
#include"SetWindowHookEx.hpp"

void _tmain(int argc, char* argv[], char* envp[])
{


	_SETWINDOWHOOK_::setwindow_inject();

}