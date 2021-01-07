/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   BasicRecursion.cpp
 * @author Tsvetan Enev
 * @date   01.2021
 * @brief  Basic recursion examples.
 */

#include <iostream>

int sumNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int result = n + sumNumbers(n - 1);
    return result;
}

void printFromTo(int a, int b)
{
    if (a >= b) {
        return;
    }

    std::cout << a << " ";
    printFromTo(a + 1, b);
}

void forRecursive(int i, int n)
{
    if (i >= n)
    {
        return;
    }
    // Do something
    forRecursive(i + 1, n);
}

void printArray(int arr[], int n)
{
    if (n <= 0)
    {
        return;   
    }
    printArray(arr, n - 1);
    std::cout << arr[n - 1] << " ";
}

void printArrayReversed(int arr[], int n)
{
    // TODO
}

void printWithPointerArithmetics(int arr[], int n)
{
    if (n <= 0)
    {
        return;
    }
    std::cout << arr[0] << " ";
    printWithPointerArithmetics(arr + 1, n - 1);
}

void printString(char str[])
{
    if (*str == '\0')
    {
        return;
    }
    std::cout << str[0];
    printString(str + 1);
}

int fibonacci(int n)
{
    // TODO
    return 0;
}

bool binarySearchHelper(int arr[], int lowerBound, int upperBound, int elem)
{
    if (upperBound - lowerBound < 1)
    {
        return false;
    }

    int middle = (upperBound + lowerBound) / 2;
    if (arr[middle] == elem)
    {
        return true;
    }
    if (elem < arr[middle])
    {
        return binarySearchHelper(arr, lowerBound, middle, elem);
    }
    else
    {
        return binarySearchHelper(arr, middle + 1, upperBound, elem);
    }
}

bool binarySearch(int arr[], int n, int elem)
{
    return binarySearchHelper(arr, 0, n, elem);
}

int main()
{
    int n;
    std::cin >> n;
    sumNumbers(n);
    int arr[] = {1,2,3,4,5,6}; 
    printArray(arr, 4);
    std::cout << binarySearch(arr, 6, 4);
    return 0;
}