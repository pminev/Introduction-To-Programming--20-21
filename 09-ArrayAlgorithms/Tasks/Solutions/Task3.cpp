/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task3.cpp
 * @author Cvetan Enev
 * @date   12.2020
 * @brief  Solution of a task 3 from practice.
		   Delete element from sorted array.
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

void DeleteSorted(int arr[MAX_SIZE], int &n, int element)
{
    int index = 0;
    while (index < n && arr[index] != element)
    {
        index++;
    }
    
    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int n;
    int newElement;
    int arr[MAX_SIZE];

    std::cin >> n;
    std::cin >> newElement;

    InputArray(arr, n);
    DeleteSorted(arr, n, newElement);
    PrintArray(arr, n);

    return 0;
}