// NumberGuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>
#include <string>
int main()
{
	srand(time(NULL));
	int min = 0; 
	int max = 10;
	int guess;
	std::string input;
	std::cout << "Welcome to the number guessing game!\n Think of a number between 0 and 10 and type ok to continue\n";
	std::cin >> input;
	if (input == "ok"|| input == "Ok")
	{
		for (int possibleGuesses = 0; possibleGuesses <=11; possibleGuesses++)
		{
			guess = rand() % max + min;
			std::cout << "Is it " << guess << " ?\n";
			std::cin >> input;
			if (input == "yes")
			{
				std::cout << "Nice man";
				return 0;
			}
			else if (input == "no")
			{
				std::cout <<"Oof. Is it higher(>) or lower(<)?\n";
				std::cin >> input;
				if (input == ">")
				{
					min = guess + 1;
				}
				else if (input == "<")
				{
					max = guess - 1;
				}
			}
		}
	}
	else if (input == "q" || input == "Q")
	{
		return 0;
	}

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
