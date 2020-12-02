/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task8.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 8 from practice.
		   Print binary operations.
 */

#include <iostream>

int main()
{
	bool first = false;
	bool second = false;

	std::cin >> first >> second;
	std::cout << "a & b = "<< (first & second); // AND
	std::cout << "a | b = "<< (first | second); // OR
	std::cout << "a ^ b = "<< (first ^ second); // XOR
	std::cout << "~a = "<< (~first);            // NOT
	return 0;
}