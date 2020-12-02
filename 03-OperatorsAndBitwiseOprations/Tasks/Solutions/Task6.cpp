/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task6.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 6 from practice.
		   Find the area of a triangle using 3 sides or a side and a height to this side.
 */

#include <iostream>
// "math.h" is a library where you can find
// many math function like abs. sqrt, pow, sin, cos and many others.
#include <math.h>

int main()
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c = 0;
	std::cout << "Enter the 3 sides of the triangle:\n";
	std::cin >> a >> b >> c;

	unsigned int perimeter = a + b + c;
	std::cout << "Area calculated by 3 sides = " << sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));

	unsigned int height = 0;
	std::cout << "Enter a side and a height of the triangle:\n";
	std::cin >> a >> height;
	std::cout << (a* height)/2;

	return 0;
}