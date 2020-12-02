/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task3.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 3 from practice.
		   Swap 2 numbers.
 */

#include <iostream>

int main()
{
	int firstNumber = 0;
	int secondNumber = 0;

	std::cout << "Enter 2 integers: \n";
	std::cin >> firstNumber >> secondNumber;
	std::cout << "a = " << firstNumber << " b = " << secondNumber << '\n';
	std::cout << "Now we'll swap the variables\n";
	// We need a temporary variable where we'll store
	// the first value
	int temp = firstNumber;
	firstNumber = secondNumber;
	secondNumber = temp;

	std::cout << "a = " << firstNumber << " b = " << secondNumber << '\n';

	return 0;
}