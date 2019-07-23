// 1-Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int age = 20;
	char letter = 'D';
	std::cout << age << ", " << letter <<std::endl;
	system("pause");
	system("CLS");
	int A = 1;
	int B = 2;
	std::cout << "Initial Values are: " << "A = " << A << " B= " << B << std::endl;
	system("pause");
	system("CLS");
	int C = A;
	A = B;
	B = C;
	std::cout << "Swapped Values are: " << "A = " << A << " B= " << B << std::endl;
	system("pause");
	system("CLS");
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
