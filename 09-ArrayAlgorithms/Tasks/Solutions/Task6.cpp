/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Task6.cpp
 * @author Cvetan Enev
 * @date   12.2020
 * @brief  Solution of a task 6 from practice.
		   Merge two sorted array into a new sorted array.
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

// This function returns the lenght of the result array
int MergeSorted(
    int arr_result[MAX_SIZE * 2],
    int arr_1[MAX_SIZE], int arr_2[MAX_SIZE],
    int size_1, int size_2)
{
    int index_result = 0;
    int index_1 = 0, index_2 = 0;
    while (index_1 < size_1 && index_2 < size_2)
    {
        if (arr_1[index_1] < arr_2[index_2])
        {
            arr_result[index_result] = arr_1[index_1];
            index_result++;
            index_1++;
        }
        else
        {
            arr_result[index_result] = arr_2[index_2];
            index_result++;
            index_2++;
        }
    }

    while (index_1 < size_1)
    {
        arr_result[index_result] = arr_1[index_1];
        index_result++;
        index_1++;
    }

    while (index_2 < size_2)
    {
        arr_result[index_result] = arr_2[index_2];
        index_result++;
        index_2++;
    }

    return index_result;
}

int main()
{
    int size_1;
    int size_2;
    int size_result;

    int arr_1[MAX_SIZE];
    int arr_2[MAX_SIZE];
    int arr_result[MAX_SIZE * 2];

    std::cin >> size_1;
    InputArray(arr_1, size_1);
    std::cin >> size_2;
    InputArray(arr_2, size_2);

    size_result = MergeSorted(arr_result, arr_1, arr_2, size_1, size_2);

    PrintArray(arr_result, size_result);

    return 0;
}