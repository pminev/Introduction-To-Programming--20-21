/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task8.cpp
 * @author Cvetan Enev
 * @date   12.2020
 * @brief  Solution of a task 8 from practice.
		   Generate array of 10 odd and array of 10 even numbers and sort them.
 */

#include <iostream>
#include <ctime>   // std::time()
#include <cstdlib> // std::rand(), std::srand()

static const int MAX_SIZE = 100;

void GenerateHeights(int arr[MAX_SIZE], int n, bool parity)
{
    int index = 0;
    while (index < n)
    {
        int height = rand() % 50 + 150;
        if (height % 2 == parity)
        {
            arr[index] = height;
            index++;
        }
    }
}


// Using bubble sort
void SortArray(int arr[MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void PrintHeights(int boys[MAX_SIZE], int girls[MAX_SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "M " << boys[i] << "; L " << girls[i] << "\n";
    }
}

int main()
{
    std::srand(std::time(0));
    int boys[MAX_SIZE];
    int girls[MAX_SIZE];

    GenerateHeights(boys, 10, 1);
    GenerateHeights(girls, 10, 0);
    SortArray(boys, 10);
    SortArray(girls, 10);

    PrintHeights(boys, girls, 10);
    return 0;
}