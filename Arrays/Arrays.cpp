// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
int collectionSum(int values[],int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += values[i];
	}
	int ar[3] = { 1,3,3 };
	return sum;
}
int combineArrays(int values1[],int values2[], int size)
{
	int sum =0;
	for (int i = 0; i < size; i++)
	{
		sum += values1[i] + values2[i];
	}
	return sum;
}
float getSmallest(float num1, float num2)
{
	if (num1 < num2)
	{
		return num1;
	}
	return num2;
}
int add(int num1, int num2)
{
	int result = num1 + num2;
	return result;
}
int subtract(int num1, int num2)
{
	int result= num1 - num2;
	return result;
}
int multiply(int num1, int num2)
{
	int result = num1 * num2;
	return result;
}
int divide(int num1, int num2)
{
	int result = num1 / num2;
	return result;
}
int main()
{
	/*int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
	int nums[5] = { num1,num2,num3,num4,num5 };
	int smallest = nums[0];
	int largest= nums[0];
	for (int i = 4; i >= 0; i--)
	{
		if (largest < nums[i])
		{
			largest = nums[i];
		}
		if (smallest > nums[i])
		{
			smallest = nums[i];
		}
	}
	std::cout << largest << std::endl;
	std::cout << smallest << std::endl;*/
	
	/*int nums[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (j == 2)
			{
				std::cout << nums[i][j] << std::endl;
			}
			else
			{
				std::cout << nums[i][j];
			}
		}
	}*/
	/*int num1 = 2;
	int num2 = 2;
	int result = add(num1, num2);
	std::cout << result << std::endl;
	result = subtract(num1, num2);
	std::cout << result << std::endl;
	result = multiply(num1, num2);
	std::cout << result << std::endl;
	result = divide(num1, num2);
	std::cout << result << std::endl;*/
	/*int health[5] = { 100,100,100,100,100 };
	int victim;
	
	std::cout << "Choose a victim!\n";
	std::cout << "0. Doyle\n";
	std::cout << "1. Siegfried\n";
	std::cout << "2.Ragnar\n";
	std::cout << "3.Keith\n";
	std::cin >> victim;
	for (int i = 0; i <= 5; i++)
	{
		
		if (victim < 0 || victim > 3)
		{
			std::cout << "Dude thats not even an option...\n";
		}
		else
		{
			health[victim] -= 40;
		}
		std::cin >> victim;
	}
	for (int i = 0; i < 4; i++)
	{
		std::cout << health[i] << std::endl;
	}*/
	int arr1[3] = { 1,1,1 };
	int arr2[3] = { 1,1,1 };
	std::cout << combineArrays(arr1, arr2, 3);
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
