/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task2.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 2 from practice.
		   Get the smallest element from a matrix.
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


// Returns the smallest element in the Matrix
int GetSmallestElement(int mat[MAX_SIZE][MAX_SIZE], int size)
{
    int min = mat[0][0];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (mat[i][j] < min) {
                min = mat[i][j];
            }
        }
    }
    return min;
}

int main()
{
	unsigned int sizeOfRows;
	unsigned int sizeOfColumns;
	int matrix[MAX_SIZE][MAX_SIZE];
	std::cin >> sizeOfRows >> sizeOfColumns;
	EnterMatrix(matrix, sizeOfRows, sizeOfColumns);
	std::cout << GetSmallestElement(matrix, sizeOfRows, sizeOfColumns);
	return 0;
}