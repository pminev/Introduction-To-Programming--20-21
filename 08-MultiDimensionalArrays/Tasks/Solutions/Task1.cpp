/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task1.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 1 from practice.
		   Enter and print matrix.
 */

#include <iostream>

static const int MAX_SIZE = 100;

// Input new values in a given Matrix 
void EnterMatrix(int mat[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> mat[i][j];
        }
    }
}

// Print a single Matrix
void PrintMatrix(int mat[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
	unsigned int sizeOfRows;
	unsigned int sizeOfColumns;
	int matrix[MAX_SIZE][MAX_SIZE];
	std::cin >> sizeOfRows >> sizeOfColumns;
	EnterMatrix(matrix, sizeOfRows, sizeOfColumns);
	PrintMatrix(matrix,, sizeOfRows, sizeOfColumns);

	return 0;
}