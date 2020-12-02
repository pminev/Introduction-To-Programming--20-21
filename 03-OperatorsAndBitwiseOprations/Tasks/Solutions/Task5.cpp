/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task5.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 5 from practice.
		   Print backwards a 3 digit integer.
 */

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter 3 digit integer:\n";
	std::cin >> num;
	short firstDigit = num % 10;
	num /= 10;
	short secondDigit = num % 10;
	num /= 10;
	std::cout << firstDigit << secondDigit << num;

	return 0;
}