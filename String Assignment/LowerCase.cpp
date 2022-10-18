//
// Created by Monika Shaw on 18-10-2022.
//
//Write a program to accept a string and convert all its characters to lower case.

#include <cctype>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <stddef.h>

char* lowerCase( char* str)
{
    for ( size_t i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main()
{
    char str[100];
    std::cout << "Enter string to convert all its characters to lower case" << std::endl;
    std::cin.getline(str, 100);

    char* toLowerString = lowerCase(str);
    std::cout << "String in lower case :" << std::endl;
    for ( size_t i = 0; str[i] != '\0'; i ++)
    {
        std::cout << toLowerString[i];
    }
    return EXIT_SUCCESS;
}