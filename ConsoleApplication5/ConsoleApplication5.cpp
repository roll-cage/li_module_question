// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <windows.h>
#include <iostream>
#include <lazy_importer.hpp>

int main()
{
	std::cout << GetModuleHandleA("kernel32.dll") << std::endl;
	std::cout << LI_MODULE("kernel32.dll").safe() << std::endl;
	std::cout << GetModuleHandleA("ntdll.dll") << std::endl;
	std::cout << LI_MODULE("ntdll.dll").safe() << std::endl;
	std::cout << GetModuleHandleA("ucrtbased.dll") << std::endl;
	std::cout << LI_MODULE("ucrtbased.dll").safe() << std::endl;
	std::cout << GetModuleHandleA("msvcp140d.dll") << std::endl;
	std::cout << LI_MODULE("msvcp140d.dll").safe() << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
