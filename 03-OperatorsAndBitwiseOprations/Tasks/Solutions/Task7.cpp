/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task7.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 7 from practice.
		   Calculate the Euclidean distance between 2 dots.
 */

#include <iostream>
// "math.h" is a library where you can find
// many math function like abs. sqrt, pow, sin, cos and many others.
#include <math.h>

int main()
{
	unsigned int dot1X = 0;
	unsigned int dot1Y = 0;
	std::cout << "Enter the first dot coordinates:\n";
	std::cin >> dot1X >> dot1Y;

	unsigned int dot2X = 0;
	unsigned int dot2Y = 0;
	std::cout << "Enter the second dot coordinates:\n";
	std::cin >> dot2X >> dot2Y;

	std::cout << "The distance is: " << sqrt((dot1X - dot2X) * (dot1X - dot2X) + (dot1Y - dot2Y) * (dot1Y - dot2Y));
	return 0;
}