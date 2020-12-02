/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task1.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 1 from practice.
		   Calculate a^3 - 1 / (b + 4).
 */

#include <iostream>

int main()
{
	float firstNum = 0.f;
	float secondNum = 0.f;

	std::cout << "Task: a^3 - 1 / (b + 4) = ?\n" << "Input 2 floating point numbers: \n";
	std::cin >> firstNum >> secondNum;
	std::cout << "a = "<<firstNum << " b = " << secondNum << " : " << (a * a * a) - (1 / (b + 4));
	return 0;
}