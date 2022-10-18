//
// Created by Monika Shaw on 18-10-2022.
//
//Write a program to accept a string and check if all the characters in the string are digits

#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <stddef.h>

int digits(char *str)
{
    int returnValue, count = 0;
    for ( size_t i = 0; i < strlen(str); i++) {
        if(isdigit(str[i]))
            count++;
    }
    if (count == strlen(str))
    {
        returnValue = EXIT_SUCCESS;
    }
    else
        returnValue = EXIT_FAILURE;
    return returnValue;
}

int main()
{
    char str[100];
    std::cout << "Enter string to check if all the characters in the string are digits." << std::endl;
    std::cin.getline(str, 100);

    int digit = digits(str);
    if (digit == 0)
        std::cout << "All the characters in the string are digits. " <<std::endl;
    else
        std::cout << "All the characters in the string are no digits.";
    return EXIT_SUCCESS;
}