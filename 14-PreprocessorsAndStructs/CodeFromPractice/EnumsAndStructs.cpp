/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2019/20
 *****************************************************************************/

 /**
  * @file   EnumsAndStructs.cpp
  * @author Plamen Minev
  * @date   01.2021
  * @brief  Example of enums and struct usage in C++.
  */

#include<iostream>

enum Color
{
    Black,
    White,
    Green,
    Red,
    Yellow,

    Count
};

enum FilePermission
{
    Read = 1 << 0,
    Write = 1 << 1,
    Both = 1 << 0 | 1 << 1,
};

void openFile(FilePermission permission)
{
    switch (permission)
    {
    case Read:
        std::cout << "Can read\n";
        break;
    case Write:
        std::cout << "Can write\n";
        break;
    case Both:
        std::cout << "Can read write\n";
        break;
    default:
        std::cout << "Unrecognized option\n";
        break;
    }
}

struct Student
{
    char name[32];
    int age;
};

void printStudent(const Student& s)
{
    std::cout << "Student is "<< s.name << " at "<< s.age << "\n";
}

int main()
{
    std::cout << Color::Count << '\n';

    openFile(FilePermission::Read);
    openFile(FilePermission::Both);

    Student newStudent;
    strcpy(newStudent.name, "Pesho");
    newStudent.age = 19;

    printStudent(newStudent);

    return 0;

}
