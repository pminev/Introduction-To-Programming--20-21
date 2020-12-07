/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task5.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Solution of a task 5 from practice.
		   Print diagonals of NxN matrix.
 */

#include <iostream>

static const int MAX_SIZE = 100;

// Input new values in a given Matrix
void InitMatrix(int mat[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
	unsigned int cnt = 10;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			mat[i][j] = cnt++;
		}
	}
}

void PrintDiagonals(int mat[MAX_SIZE][MAX_SIZE], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int column = 0; column < size; column++)
		{
			if (row == column || row + column == size - 1)
			{
				std::cout << mat[row][column] << ' ';
			}
			else
			{
				std::cout << "   ";
			}
		}
		std::cout << '\n';
	}
}

int main()
{
	unsigned int size;
	int matrix[MAX_SIZE][MAX_SIZE];

	std::cin >> size;
	InitMatrix(matrix, size, size);
	PrintDiagonals(matrix, size);
	return 0;
}