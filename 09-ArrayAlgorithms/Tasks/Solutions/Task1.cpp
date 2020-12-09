/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task1.cpp
 * @author Cvetan Enev
 * @date   12.2020
 * @brief  Solution of a task 1 from practice.
		   Check if array is sorted.
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

bool IsSorted(int arr[MAX_SIZE], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int arr[MAX_SIZE];

    std::cin >> n;
    InputArray(arr, n);
    std::cout << IsSorted(arr, n) << std::endl;

    return 0;
}