/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task4.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 4 from practice.
		   Found quotient and remainder of a given number.
 */

#include <iostream>

int main()
{
	int p = 0;
	int q = 0;

	std::cout << "Enter 2 integers:\n";
	std::cin >> p >> q;
	std::cout << "quotient = " << p/q << ", remainder = " << p%q;

	return 0;
}