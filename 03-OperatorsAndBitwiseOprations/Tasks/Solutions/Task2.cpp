/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task2.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 2 from practice.
		   Check if a given number is even.
 */

#include <iostream>

int main()
{
	int number = 0;

	std::cin >> number;
	std::cout << "Is " << number << " even? - " << number % 2 == 0;
	return 0;
}