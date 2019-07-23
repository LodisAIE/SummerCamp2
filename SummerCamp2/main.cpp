// SummerCamp2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	//intro to cpp
    std::cout << "Lodis Perkins\n"; 
	std::cout << "song1\nsong2\nsong3\nsong4\nsong5";
	int sum = 0;
	for (int i = 1000; i >= 0; i--)
	{
		if (i % 5 == 0)
		{
			sum += i;
		}
		else if (i % 3 == 0)
		{
			sum += i;
		}
	}
	std::cout << sum;
	system("pause");
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
