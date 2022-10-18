//
// Created by Monika Shaw on 18-10-2022.
//
//Write a program to accept a string and check if all the characters in the string are alphanumeric.

#include <cstdlib>
#include <cstring>
#include <cwctype>
#include <iostream>
#include <stddef.h>

int alphanumeric(char *str)
{
    int returnValue;
    for (size_t i = 0; i < strlen(str); i++) {
        if (iswalnum(str[i]))
            returnValue = EXIT_SUCCESS;
        else
            returnValue = EXIT_FAILURE;
    }
    return returnValue;
}

int main()
{
    char str[100];
    std::cout << "Enter string to check if all the characters in the string are alphanumeric." << std::endl;
    std::cin.getline(str, 100);

    int alphaNum = alphanumeric(str);
    if(alphaNum == 0)
        std::cout << "All the characters in the string are alphanumeric." << std::endl;
    else
        std::cout << "All the characters in the string are not alphanumeric." << std::endl;
    return EXIT_SUCCESS;
}