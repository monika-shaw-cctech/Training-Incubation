//
// Created by Monika Shaw on 18-10-2022.
//
//Write a program to accept a string and starting with first character replace every alternate character with the '*' character.

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <stddef.h>

char* alternate( char* str) {

    for ( size_t i = 0; i < strlen(str); i = i+2) {
       str[i] = '*';
    }
    return str;
}

int main()
{
    char str[100];
    std::cout << "Enter string to replace every alternate character with '*' " << std::endl;
    std::cin.getline(str, 100);

    char* alternateString = alternate(str);
    std::cout << "Every alternate character replaced with '*' : ";
    for ( size_t i = 0; str[i] != '\0'; i ++)
    {
        std::cout << alternateString[i];
    }
    return EXIT_SUCCESS;
}