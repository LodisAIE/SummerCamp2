// Tic-Tac-Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>
void displayGrid(char grid[3][3])
{
	system("CLS");
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (j == 2)
			{
				std::cout << grid[i][j] << std::endl;
			}
			else
			{
				std::cout << grid[i][j];
			}
		}
	}
}
bool checkSpace(char grid[3][3], int index1, int index2)
{
	if (grid[index1][index2] != 'e')
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool win(char grid[3][3])
{
	
	char value = 'f';
	for (int i = 0; i <= 2; i++)
	{
		value = grid[i][0];
		for (int j = 0; j <= 2; j++)
		{
			if (value == grid[i][j] && value != 'e')
			{
				if (j == 2)
				{
					return true;
				}
				else
				{
					continue;
				}
			}
			else
			{
				break;
			}
		}
	}
	for (int i = 0; i <= 2; i++)
	{
		value = grid[0][i];
		for (int j = 0; j <= 2; j++)
		{
			if (value == grid[j][i] && value != 'e')
			{
				if (j == 2)
				{
					return true;
				}
				else
				{
					continue;
				}
			}
			else
			{
				break;
			}
		}
	}
	for (int j = 0; j <= 2; j++)
	{
		value = grid[0][0];
		if (value == grid[j][j] && value != 'e')
		{
			if (j == 2)
			{
				return true;
			}
			else
			{
				continue;
			}
		}
		else
		{
			break;
		}
	}
	int j = 0;
	for (int i = 2; i >= 0; i--)
	{
		value = grid[2][0];
		if (value == grid[i][j] && value != 'e')
		{
			if (j == 2)
			{
				return true;
			}
			else
			{
				j++;
				continue;
				
			}
		}
		else
		{
			break;
		}
	}
	return false;
}
int main()
{
	char playerToken;
	char computerToken;
	bool hasSelected = false;
	int choice;
	char currentToken;
	bool playerTurn = true;
	srand(time(NULL));
	char grid[3][3] = { {'e','e','e'},{'e','e','e'},{'e','e','e'} };
	while (!hasSelected)
	{
		std::cout << "Type 'x' to be x or type 'o' to be o\n";
		std::cin >> playerToken;
		if (playerToken == 'x' || playerToken == 'X')
		{
			computerToken = 'o';
			hasSelected = true;
		}
		else if (playerToken == 'o' || playerToken == 'O')
		{
			computerToken = 'x';
			hasSelected = true;
		}
		else
		{
			std::cout << "Invalid input\n";
		}
	}
	for (int i = 0; i <=9; i++)
	{
		displayGrid(grid);
		if (playerTurn)
		{
			std::cin >> choice;
			currentToken = playerToken;
			playerTurn = false;
		}
		else
		{
			choice = rand() % 9 + 1;
			currentToken = computerToken;
			playerTurn = true;
		}
		if (choice >= 1 && choice <= 9)
		{
			switch (choice)
			{
			case(1):
			{
				if (checkSpace(grid, 0, 0) == false && playerTurn)
				{
					i--;
					playerTurn = false;
					continue;
				}
				else if (checkSpace(grid, 0, 0) == false && !playerTurn)
				{
					i--;
					playerTurn = true;
					continue;
				}
				else if (checkSpace(grid, 0, 0))
				{
					grid[0][0] = currentToken;
				}
				else
				{
					break;
				}
				break;
			}
			case(2):
			{
				if (checkSpace(grid, 0, 1) == false && playerTurn)
				{
					i--;
					playerTurn = false;
					continue;
				}
				else if (checkSpace(grid, 0, 1) == false && !playerTurn)
				{
					i--;
					playerTurn = true;
					continue;
				}
				else if (checkSpace(grid, 0, 1))
				{
					grid[0][1] = currentToken;
				}
				else
				{
					break;
				}
				break;
			}
			case(3):
			{
				
				if (checkSpace(grid, 0, 2) == false && playerTurn)
				{
					i--;
					playerTurn = false;
					continue;
				}
				else if (checkSpace(grid, 0, 2) == false && !playerTurn)
				{
					i--;
					playerTurn = true;
					continue;
				}
				else if (checkSpace(grid, 0, 2))
				{
					grid[0][2] = currentToken;
				}
				else
				{
					break;
				}
				break;
			}
			case(4):
			{
				if (checkSpace(grid, 1, 0) == false && playerTurn)
				{
					i--;
					playerTurn = false;
					continue;
				}
				else if (checkSpace(grid, 1, 0) == false && !playerTurn)
				{
					i--;
					playerTurn = true;
					continue;
				}
				else if (checkSpace(grid, 1, 0))
				{
					grid[1][0] = currentToken;
				}
				else
				{
					break;
				}
				break;
			}
			case(5):
			{
				
				if (checkSpace(grid, 1, 1) == false && playerTurn)
				{
					i--;
					playerTurn = false;
					continue;
				}
				else if (checkSpace(grid, 1, 1))
				{
					grid[1][1] = currentToken;
				}
				else
				{
					break;
				}
				break;
			}
			case(6):
			{
				if (checkSpace(grid, 1, 2) == false && playerTurn)
				{
					i--;
					playerTurn = false;
					continue;
				}
				else if (checkSpace(grid, 1, 2) == false && !playerTurn)
				{
					i--;
					playerTurn = true;
					continue;
				}
				else if (checkSpace(grid, 1, 2))
				{
					grid[1][2] = currentToken;
				}
				else
				{
					break;
				}
				break;
			}
			case(7):
			{
				if (checkSpace(grid, 2, 0) == false && playerTurn)
				{
					i--;
					playerTurn = false;
					continue;
				}
				else if (checkSpace(grid, 2, 0) == false && !playerTurn)
				{
					i--;
					playerTurn = true;
					continue;
				}
				else if (checkSpace(grid, 2, 0))
				{
					grid[2][0] = currentToken;
				}
				else
				{
					break;
				}
				break;
			}
			case(8):
			{
				
				if (checkSpace(grid, 2, 1) == false && playerTurn)
				{
					playerTurn = false;
					continue;
				}
				else if (checkSpace(grid, 2, 1) == false && !playerTurn)
				{
					i--;
					playerTurn = true;
					continue;
				}
				else	if (checkSpace(grid, 2, 1))
				{
					grid[2][1] = currentToken;
				}
				else
				{
					break;
				}
				break;
			}
			case(9):
			{
				if (checkSpace(grid, 2, 2) == false && playerTurn)
				{
					i--;
					playerTurn = false;
					continue;
				}
				else if (checkSpace(grid, 2, 2) == false && !playerTurn)
				{
					i--;
					playerTurn = true;
					continue;
				}
				else if (checkSpace(grid, 2, 2))
				{
					grid[2][2] = currentToken;
				}
				else
				{
					break;
				}
				break;
			}
			}
		}
		else
		{
			playerTurn = true;
			std::cout << "Looks like you can't go there\n";
			system("pause");
			i--;
			continue;
		}
		
		if (win(grid))
		{
			displayGrid(grid);
			std::cout << "Winner!!!!!!!\n";
			break;
		}
	}
	
	
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
