// CppPrimerPlus.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
// carrots.cpp -- food processing program
// uses and displays a variable
//#include <tchar.h>


int main()
{
	using namespace std;

	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;                // C++ input
	cout << "Here are two more. ";
	carrots = carrots + 2;
	// the next line concatenates output
	cout << "Now you have " << carrots << " carrots." << endl;
	cin.get();
	cin.get();
	return 0;
}
