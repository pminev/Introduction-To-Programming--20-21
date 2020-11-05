/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Loops.cpp
 * @author Plamen Minev
 * @date   10.2020
 * @brief  Loops(for, while, do-while). 
 */

#include <iostream>

int main() {
    int value = 10;
    std::cout << "Type of loops:" << std::endl;;

    std::cout << std::endl << std::endl;
    std::cout << "Numbers from 10 to 1 in while loop: " << std::endl;
    while (value > 0)
    {
    	std::cout << value << " ";
    	value--;
    }

    std::cout << std::endl << std::endl;
    std::cout << "Numbers from 10 to 1 in do-while loop: " << std::endl;
    value = 10;
    do
    {
    	std::cout << value << " ";
    	--value;
    } while (value > 0);

    std::cout << std::endl << std::endl;
    std::cout << "Numbers from 10 to 1 in for loop: " << std::endl;
    value = 10;
    for (int i = value; i > 0; i--)
    {
    	std::cout << value << " ";
    	value--;
    }

    std::cout << std::endl << std::endl;
    std::cout << "All even numbers from 1 to 20: " << std::endl;
    for (size_t i = 1; i <= 20; i++)
    {
    	if (i % 2 == 0)
    	{
    		std::cout << i << " ";
    	}
    }

    std::cout << std::endl << std::endl;
    std::cout << "Sum of all even numbers from 1 to 20: " << std::endl;
    int sum = 0;
    for (size_t i = 1; i < 20; i++)
    {
    	if (i % 2 != 0)
    	{
          continue;
    	}
    	sum += i;
    }
    std::cout << sum;

    std::cout << std::endl << std::endl;
    std::cout << "Which are the first numbers from 1 to 20 that make sum of 10: " << std::endl;
    int sum = 0;
    for (size_t i = 1; i < 20; i++)
    {
    	if (sum >= 10)
    	{
    		break;
    	}
    	sum += i;
    	std::cout << i << " ";
    }

    std::cout << std::endl << std::endl;
    std::cout << "How to check correct input? " << std::endl;
    int inputValue;
    do
    {
    	std::cout << "Please enter value in the range (0-100)" << std::endl;
    	std::cin >> inputValue;
    } while (inputValue <= 0 || inputValue >= 100);

    std::cout << "Value from the console is: " << inputValue << std::endl;
    return 0;
}
