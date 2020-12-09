/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task2.cpp
 * @author Cvetan Enev
 * @date   12.2020
 * @brief  Solution of a task 2 from practice.
		   Insert element into sorted array.
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

int main() {
    int n;
    int newElement;
    int arr[MAX_SIZE];

    std::cin >> n;
    std::cin >> newElement;
    InputArray(arr, n);
    InsertSorted(arr, n, newElement);
    PrintArray(arr, n);

    return 0;
}