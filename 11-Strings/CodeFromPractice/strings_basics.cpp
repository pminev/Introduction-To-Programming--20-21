#include <iostream>
#include <cstring>

int main()
{
    // Declaration
    // char str[] = { 'a', 's', 'd', 'f' };
    // char str[] = { 'a', 's', 'd', 'f', '\0' };
    // char str[] = "asdf"; // it has '\0' at the end
    // char* str = "asdf";
    // char str[5] = "asdf";

    // Print a string
    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << str[0];
    // }
    // std::cout << '\n';
    
    // std::cout << str << '\n';

    // Input a string
    // char str[1000];
    // std::cin >> str;
    // std::cout << str << '\n';
    
    // int max_size = 16;
    // char str[max_size];
    // std::cin.getline(str, max_size);
    // std::cout << str << '\n';

    // ------ Functions -------

    // char str[16] = "asdfghj";
    // std::cout << "Lenght of string: " << strlen(str) << std::endl;

    // char str2[16] = "asdfz";
    // if (strcmp(str, str2) == 0)
    // {
    //     std::cout << "They are equal" << std::endl;
    // }
    // else
    // {
    //     std::cout << "They are not equal" << std::endl;
    // }
    // strncmp(...)

    // char str_copy[16];
    // strcpy(str_copy, str); // strcpy(dest, src)
    // strncpy(...)

    // char str3[32];
    // strcat(str3, str1);
    // strncat(...)

    // const char * start_of_substr = strstr(str, str2);
    // if (start_of_substr != nullptr)
    // {
    //     std::cout << "The string str2 is found from: " << start_of_substr << std::endl;
    // }

    return 0;
}