/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task4.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 4 from practice.
		   Sum two matrices.
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

// Sum two matrices
void SumMatrices(int firstMat[MAX_SIZE][MAX_SIZE],
    int secondMat[MAX_SIZE][MAX_SIZE],
    int rows,
    int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            firstMat[i][j] += secondMat[i][j];
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
	int matrix2[MAX_SIZE][MAX_SIZE];
	std::cin >> sizeOfRows >> sizeOfColumns;
	EnterMatrix(matrix, sizeOfRows, sizeOfColumns);
	EnterMatrix(matrix2, sizeOfRows, sizeOfColumns);
	SumMatrices(matrix, matrix2, sizeOfRows, sizeOfColumns);
	PrintMatrix(matrix, sizeOfRows, sizeOfColumns);

	return 0;
}