// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Player.h"
#include "time.h"
#include <string>
std::string getResponse(std::string name)
{
	std::string response1 = name + " just got recked soooooon!!!"+ "-20hp";
	std::string response2 = "You just insulted " + name + "'s lemon bars!!! -20hp";
	std::string response3 = "You raised the temperature of the room higher making " + name + " slightly uncomfortable! -20hp";
	std::string responses[3] = { response1,response2,response3 };
	srand(time(NULL));
	int choice = rand() %3;
	return responses[choice];
}
int main()
{
	Player player;
	Zombie Bob;
	Bob.name = "Bob";
	Zombie Phil;
	Phil.name = "Bob";
	Zombie Adam;
	Adam.name = "Adam";
	Zombie Carl;
	Carl.name = "Carl";
	Zombie Ron;
	Ron.name = "Ron";
	std::string response;
	Zombie zombies[5] = { Bob,Phil,Adam,Carl,Ron };
	int current = 0;
	char input;
	for (int i = 0; i <= 4; i++)
	{
		current = i;
		for (int j = 0; j <= 10; j++)
		{
			std::cout << " Press 'a' to attack!" << std::endl;
			std::cin>> input;
			if ((input == 'a' || input == 'A')&& player.canHit())
			{
				player.fight(zombies[current]);
				response = getResponse(zombies[current].name);
				std::cout << response << std::endl;
			}
			else
			{
				std::cout << "Ya missed!!!\n";
			}
			if (zombies[current].getHealth() <= 0)
			{
				std::cout << " You won this round!\n";
				player.resetHealth();
				break;
			}
			if (player.getHealth() <= 0)
			{
				std::cout <<"Wasted. Try again my guy";
				system("pause");
				return 0;
			}
			if (zombies[current].canHit())
			{
				player.takeDamage(zombies[current].getDamage());
			}
			else
			{
				std::cout << zombies[current].name << " missed!!!\n";
			}
			std::cout << "Your health is " << player.getHealth() << std::endl;
			std::cout << zombies[current].name << "'s health is " << zombies[current].getHealth() << std::endl;
			system("pause");
			system("CLS");
		}
		
	}
	std::cout << "Actually...everyones dead so...you won the game!!" << std::endl;
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
