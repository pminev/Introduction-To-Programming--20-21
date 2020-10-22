/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   BitwiseOperations.cpp
 * @author Plamen Minev
 * @date   10.2020
 * @brief  C++ bitwise operations.
 */

#include <iostream>

int main() {
	std::cout << "Bitwise operations examples: " << std::endl;
	
	int a = 9; //  0000 1001 
	int b = 17; // 0001 0001

	std::cout << "AND: a & b = " << (a & b) << std::endl;
	std::cout << "OR: a | b = " << (a | b) << std::endl;
	std::cout << "XOR: a ^ b = " << (a ^ b) << std::endl;	
	std::cout << "NOT: ~a = " << ~a << std::endl;

	std::cout << "Left shift (1<<3) = " << (1 << 3) << std::endl;
	std::cout << "Left shift (17>>3) = " << (17 >> 3) << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << "Bitwise operations with assignment: " << std::endl;
	int c = 10; 
	std::cout << "c = " << c << std::endl; // 1010
	c &= 1;  // is same as:  c = c & 1;  <=> 0000 = 1010 & 0001
	std::cout << "c = " << c << std::endl; // 0000
	c |= 10; // is same as:  c = c | 10; <=> 1010 = 0000 | 1010
	std::cout << "c = " << c << std::endl; // 1010
	c ^= 4;  // is same as:  c = c ^ 4;  <=> 1110 = 1010 | 0100
	std::cout << "c = " << c << std::endl; // 1110

	std::cout << std::endl << std::endl;

	std::cout << "Binary and hexadecimal representation: " << std::endl;

	int binary = 0b0101; // c++14
	int hex = 0xC4;

	std::cout << "Binary number is: " << binary << std::endl;
	std::cout << "Hexadecimal number is: " << hex << std::endl;
    return 0;
}
