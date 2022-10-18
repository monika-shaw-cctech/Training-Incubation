//
// Created by Monika Shaw on 18-10-2022.
//
//Write a program to accept a string and reverse it.

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <stddef.h>

char* reverseString( char* str)
{
    char temp;
    int len = strlen(str);
    for ( size_t i = 0; i < len / 2; i++) {
       temp = str[i];
       str[i] = str[len - i - 1];
       str[len - i - 1] = temp;
    }
    return str;
}

int main()
{
    char str[100];
    std::cout << "Enter string to reverse it" << std::endl;
    std::cin.getline(str, 100);

    char* reverse = reverseString(str);
    std::cout << "Reversed String : ";
    for ( size_t i = 0; str[i] != '\0'; i ++)
    {
        std::cout << reverse[i];
    }
    return EXIT_SUCCESS;
}