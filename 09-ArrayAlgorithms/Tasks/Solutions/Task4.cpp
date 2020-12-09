/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task4.cpp
 * @author Cvetan Enev
 * @date   12.2020
 * @brief  Solution of a task 4 from practice.
		   Check if array is symmetric.
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

bool IsSymmetric(int arr[MAX_SIZE], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int newElement;
    int arr[MAX_SIZE];

    std::cin >> n;

    InputArray(arr, n);
    std::cout << IsSymmetric(arr, n) << std::endl;

    return 0;
}