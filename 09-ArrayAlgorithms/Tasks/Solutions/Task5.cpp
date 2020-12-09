/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task5.cpp
 * @author Cvetan Enev
 * @date   12.2020
 * @brief  Solution of a task 5 from practice.
		   Filter even elements of array into new sorted one.
 */

#include <iostream>

static const int MAX_SIZE = 100;

void InputArray(int arr[MAX_SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

void PrintArray(int arr[MAX_SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

void InsertSorted(int arr[MAX_SIZE], int &n, int element)
{
    int index = 0;
    while (index < n && arr[index] < element)
    {
        index++;
    }
    
    for (int i = n; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
    n++;
}

void FilterEven(int arr_1[MAX_SIZE], int arr_2[MAX_SIZE], int &size_1, int &size_2)
{
    for (int i = 0; i < size_1; i++)
    {
        if (arr_1[i] % 2 == 0)
        {
            InsertSorted(arr_2, size_2, arr_1[i]);
        }
    }
}

int main() {
    int size_1;
    int size_2 = 0;
    int newElement;
    int arr_1[MAX_SIZE];
    int arr_2[MAX_SIZE];

    std::cin >> size_1;
    InputArray(arr_1, size_1);
    FilterEven(arr_1, arr_2, size_1, size_2);
    PrintArray(arr_2, size_2);

    return 0;
}