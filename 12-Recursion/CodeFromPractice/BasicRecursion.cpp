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

int sumNumbers(int n)   // sum form 0 to n
{
    if (n == 0)
    {
        return 0;
    }

    int result = n + sumNumbers(n - 1);
    return result;
}

void printFromTo(int a, int b)  // [a; b]
{
    if (a > b)
    {
        return;
    }

    std::cout << a << " ";
    printFromTo(a + 1, b);
}

void forRecursive(int i, int n)
{
    if (i < n)
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
// arr = { 1, 2, 3}; n = 3;
// 1 2 3

void printArrayReversed(int arr[], int n)
{
    if (n <= 0)
    {
        return;
    }

    std::cout << arr[n - 1] << " ";
    printArrayReversed(arr, n - 1);
}

void printWithPointerArithmetics(int arr[], int n)
{
    if (n <= 0)
    {
        return;
    }
    std::cout << arr[0] << " ";
    //arr size == n - 1
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

// n0 = 0, n1 = 1 ..., nI = nI-1 + nI-2
int fibonacci(int n)
{
    if (n = 0) {
        return 0;
    }
    if (n = 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
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
    int m, n;
    // std::cin >> n;
    // std::cin >> m;
    
    // std::cout << sumNumbers(n) << std::endl;
    // printFromTo(n, m);

    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    std::cout << "\n";
    printArrayReversed(arr, 6);
    
    // std::cout << binarySearch(arr, 6, 4) << "\n";
    return 0;
}