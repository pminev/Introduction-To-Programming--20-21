/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task3.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 3 from practice.
		   Multiply matrix by a scalar.
 */

#include <iostream>

// Input new values in a given Matrix 
void EnterMatrix(int mat[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> mat[i][j];
        }
    }
}

// Multiply a given matrix by a multiplier
void MultiplyMatrix(int mat[MAX_SIZE][MAX_SIZE], int sizeRows, int sizeColums, int multiplier)
{
    for (int i = 0; i < sizeRows; i++) {
        for (int j = 0; j < sizeColums; j++) {
            mat[i][j] *= multiplier;
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
	int scalar;
	int matrix[MAX_SIZE][MAX_SIZE];
	std::cin >> scalar >> sizeOfRows >> sizeOfColumns;
	EnterMatrix(matrix, sizeOfRows, sizeOfColumns);
	MultiplyMatrix(matrix, sizeOfRows, sizeOfColumns, scalar);
	PrintMatrix(matrix, sizeOfRows, sizeOfColumns);
	return 0;
}