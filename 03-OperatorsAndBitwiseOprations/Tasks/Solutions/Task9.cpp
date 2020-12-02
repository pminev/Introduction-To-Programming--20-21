/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task9.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 9 from practice.
 	       This task should be solved only with binary operations.
		    - Print first 8 bits of a number.
		    - Check if the number is even.
		    - Swap the bits on even positions of the first byte.
 */

#include <iostream>

int main()
{
	int number = 0;

	std::cin >> number;
	short firstByte = number & 0xFF;
	std::cout << "First byte is: " << firstByte << '\n';
	std::cout << "Bits are: "	<< (firstByte >> 7 & 1) << ' ' // 8th
								<< (firstByte >> 6 & 1) << ' ' // 7th
								<< (firstByte >> 5 & 1) << ' ' // 6th
								<< (firstByte >> 4 & 1) << ' ' // 5th
								<< (firstByte >> 3 & 1) << ' ' // 4th
								<< (firstByte >> 2 & 1) << ' ' // 3rd
								<< (firstByte >> 1 & 1) << ' ' // 2nd
								<< (firstByte  & 1) << '\n';   // 1st


	std::cout << "Is the number even? - " << (number & 1) << '\n';
	std::cout << "Swap the bits on even positions of the first byte = " << (number ^ 0b101010101) << '\n';
	return 0;
}