/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task7.cpp
 * @author Cvetan Enev
 * @date   12.2020
 * @brief  Solution of a task 7 from practice.
		   Merge two sorted array into a new sorted array.
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

// Sort a row of a matrix
void SortRow(int mat[MAX_SIZE][MAX_SIZE], int current_row, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < cols; j++)
        {
            if (mat[current_row][j] < mat[current_row][min_index])
            {
                min_index = j;
            }
        }
        int tmp = mat[current_row][i];
        mat[current_row][i] = mat[current_row][min_index];
        mat[current_row][min_index] = tmp;
    }
}

// Sort a column of a matrix
void SortColumn(int mat[MAX_SIZE][MAX_SIZE], int rows, int current_column)
{
    for (int i = 0; i < rows; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < rows; j++)
        {
            if (mat[j][current_column] < mat[min_index][current_column])
            {
                min_index = j;
            }
        }
        int tmp = mat[i][current_column];
        mat[i][current_column] = mat[min_index][current_column];
        mat[min_index][current_column] = tmp;
    }
}

void SortMatrix(int mat[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        SortRow(mat, i, cols);  
    }

    for (int i = 0; i < cols; i++)
    {
        SortColumn(mat, rows, i);
    }
}

int main()
{
	unsigned int sizeOfRows;
	unsigned int sizeOfColumns;
	int matrix[MAX_SIZE][MAX_SIZE];
	std::cin >> sizeOfRows >> sizeOfColumns;
	EnterMatrix(matrix, sizeOfRows, sizeOfColumns);
    SortMatrix(matrix, sizeOfRows, sizeOfColumns);
    std::cout << "\n";
	PrintMatrix(matrix, sizeOfRows, sizeOfColumns);

	return 0;
}