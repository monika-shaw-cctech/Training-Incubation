//
// Created by Monika Shaw on 18-10-2022.
//
//Write a program to accept a string and convert all its characters to upper case.

#include <cctype>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <stddef.h>

char* upperCase( char* str)
{
    for ( size_t i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

int main()
{
    char str[100];
    std::cout << "Enter string to convert in upper case" << std::endl;
    std::cin.getline(str, 100);

    char* upper = upperCase(str);
    std::cout << "Upper Case String :" << std::endl;
    for ( size_t i = 0; str[i] != '\0'; i ++)
    {
        std::cout << upper[i];
    }
    return EXIT_SUCCESS;
}