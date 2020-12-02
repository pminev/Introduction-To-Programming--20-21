/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task10.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 10 from practice.
		   This task should be solved only with binary operations.
		   Check if 2 numbers have different signs.
		   Check if the numbers are same.
 */

#include <iostream>

int main()
{
	int x = 0;
	int y = 0;

	std::cout << "Enter 2 integers:\n";
	std::cin >> x >> y;
	std::cout << "Are signs opposite? - " << ((x ^ y) < 0) << '\n';

	std::cout << "Enter 2 integers:\n";
	std::cin >> x >> y;
	std::cout << "Are numbers the same - " << ((x ^ y) == 0) << '\n';

	return 0;
}