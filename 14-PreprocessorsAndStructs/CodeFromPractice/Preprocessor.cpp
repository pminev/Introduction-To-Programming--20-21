/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2020/21
 *****************************************************************************/

/**
 * @file   Preprocessor.cpp
 * @author Plamen Minev
 * @date   01.2021
 * @brief  Basic function pointers examples.
 */

#include <iostream>

#define MAKESTR(a) #a
#define CONCAT(a,b) a ## b

#define MAX(a,b) ((a > b) ? (a) : (b))
#define PRINT(str) std::cout<< str;
#define PRINT_EMPTY_LINE() PRINT('\n')


#define DEBUG
#ifndef DEBUG
//#define NDEBUG
#endif

#define FIRST_CONDITION


int main()
{
#ifdef DEBUG
    std::cout << "Something that should happen only in Debug.\n";
#endif

    PRINT_EMPTY_LINE();

#if defined(DEBUG) && defined(FIRST_CONDITION)
    std::cout << "This is debug build with some condition.\n";
#elif defined(DEBUG)
    std::cout << "Always start with condition which has the most if defines!'\n'";
#elif defined(NDEBUG)
    std::cout << "This is release build!";
#else
    std::cout << "All defines are disabled!'\n'";
#endif

    PRINT_EMPTY_LINE();
    std::cout<< "Compiled file is "          << __FILE__    << '\n' <<
                "The line is "               << __LINE__    << '\n' << 
                "Date of compilation is "    << __DATE__    << '\n' <<
                "Time of compilation is is " << __TIME__    << '\n' <<
                "The version of C++ is "     << __cplusplus << '\n';


    PRINT_EMPTY_LINE();
    int ab = 100;
    std::cout << "Example of MAKESTR " << MAKESTR(ab)  << '\n';
    std::cout << "Example of CONCAT "  << CONCAT(a, b) << '\n' ;
    std::cout << "Example of MAX "     << MAX(ab, 105) << '\n';

    return 0;
}
