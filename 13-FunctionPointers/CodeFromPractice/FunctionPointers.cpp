/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   FuctionPointers.cpp
 * @author Plamen Minev
 * @date   01.2021
 * @brief  Basic function pointers examples.
 */

#include <iostream>

void PrintHello()
{
    std::cout << "Hello";
}

void PrintWorld()
{
    std::cout << "World";
}

void Add5(int& a)
{
    a+=5;
}

void Minus7(int& a)
{
    a -= 7;
}

void Mult10(int& a)
{
    a *= 10;
}

//int main()
//{
//    // Funtion pointer can point to any function which
//    // has same declaration(return type and arguments)
//    void (*fpPrintText)();
//    
//    fpPrintText = &PrintHello;
//    fpPrintText();
//    
//    std::cout << ' ';
//   
//    fpPrintText = &PrintWorld;
//    fpPrintText();
//    std::cout << '\n';
//
////    int number = 15;
////    void (*fpChangeValue)(int&);
////    fpChangeValue = &Add5;
////    fpChangeValue(number);
////    std::cout << number << '\n';
////
////    fpChangeValue = &Minus7;
////    fpChangeValue(number);
////    std::cout << number << '\n';
////
////    fpChangeValue = &Mult10;
////    fpChangeValue(number);
////    std::cout << number << '\n';
//
////    std::cout << "\nArray of Function ptr(Pipeline):\n";
////    number = 15;
////    void (*fpChangeValueArr[])(int&) = { Add5, Minus7, Mult10 };
////    int functionsCount = 3;
////    for (int i = 0; i < functionsCount; i++)
////    {
////        fpChangeValue = fpChangeValueArr[i];
////        fpChangeValue(number);
////        std::cout << number << '\n';
////    }
//
//    return 0;
//}
