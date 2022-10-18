//
// Created by Monika Shaw on 18-10-2022.
//
//Write a program to accept a string and check if all the characters in the string are alphabets.

#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <stddef.h>

int alphabets(char *str)
{
    int returnValue;
    for (size_t i = 0; i < strlen(str); i++) {
        if (isalpha(str[i]))
             returnValue = EXIT_SUCCESS;
        else
            returnValue = EXIT_FAILURE;
    }
    return returnValue;
}

int main()
{
    char str[100];
    std::cout << "Enter string to check if all the characters in the string are alphabets" << std::endl;
    std::cin.getline(str, 100);

    int alpha = alphabets(str);
    if  (alpha == 0)
        std::cout << "All the characters in the string are alphabets " << std::endl;
    else
        std::cout << "All the characters in the string are not alphabets" << std::endl;
    return EXIT_SUCCESS;
}