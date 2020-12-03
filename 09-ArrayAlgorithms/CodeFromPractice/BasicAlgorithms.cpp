/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   BasicAlgorithms.cpp
 * @author Plamen Minev
 * @date   12.2020
 * @brief  Basic array sorting and searching algorithms.
 */

#include <iostream>
#include <ctime>   // std::time()
#include <cstdlib> // std::rand(), std::srand()

static const unsigned int INVALID_INDEX = -1;
static const unsigned int MAX_SIZE = 100;

void FillSortedArray(int arr[MAX_SIZE], unsigned int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
}

void FillArray(int arr[MAX_SIZE], unsigned int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % MAX_SIZE;
	}
}

void PrintArray(int arr[MAX_SIZE], unsigned int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}

int LinearSearch(int arr[MAX_SIZE], unsigned int size, int element)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			return i;
		}
	}

	return INVALID_INDEX;
}

// In order to use binary search algorithm the array should sorted.
// Current implementation will work for ascending sorted arrays.
// If there is no such element we will return INVALID_INDEX;
int BinarySearch(int arr[MAX_SIZE], unsigned int size, int element)
{
	int begin = 0;
	int end = size - 1;
	int middle;

	while (begin <= end)
	{
		middle = (begin + end) / 2;
		if (arr[middle] == element)
		{
			return middle;
		}

		if (arr[middle] > element)
		{
			end = middle - 1;
		}
		else // arr[middle] < element
		{
			begin = middle + 1;
		}
	}

	return INVALID_INDEX;
}

bool IsBigger(int first, int second)
{
	return first > second;
}

bool isSmaller(int first, int second)
{
	return first < second;
}

void swap(int& first, int& second)
{
	int elemValue = first;
	first = second;
	second = elemValue;
}

// Insertion sort is an algorithm for sorting an array.
void InsertionSort(int arr[MAX_SIZE], unsigned int size)
{
	for (int i = 0; i < size; i++)
	{
		int currentElemIndex = i;
		int previousElemIndex = i-1;
		while (previousElemIndex >= 0 && isSmaller(arr[currentElemIndex], arr[previousElemIndex]))
		{
			swap(arr[currentElemIndex], arr[previousElemIndex]);
			previousElemIndex--;
			currentElemIndex--;
		}
	}
}

void TestSort(int arr[MAX_SIZE], unsigned int size)
{
	PrintArray(arr, size);
	InsertionSort(arr, size);
	PrintArray(arr, size);
}

void TestLinearSearch(int arr[MAX_SIZE], unsigned int size)
{
	FillArray(arr, size);
	PrintArray(arr, size);
	std::cout << "Index of 11 is: " << LinearSearch(arr, size, 11) << '\n';
}

void TestBinarySearch(int arr[MAX_SIZE], unsigned int size)
{
	FillArray(arr, size);
	PrintArray(arr, size);
	InsertionSort(arr, size);
	PrintArray(arr, size);
	std::cout << "Index of 11 is: " << BinarySearch(arr, size, 11) << '\n';
}

int main() {

	// To use real random generated elements we should seed the current time
	//std::srand(std::time(0));

	int arr[MAX_SIZE] = { 0, };

	TestSort(arr, MAX_SIZE);

	TestLinearSearch(arr, MAX_SIZE);
	TestBinarySearch(arr, MAX_SIZE);

	return 0;
}
