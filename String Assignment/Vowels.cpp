//
// Created by Monika Shaw on 18-10-2022.
//
//Write a program to accept a string and replace every vowel in the string with the '*' character.

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <stddef.h>

char* vowelsInString( char* str)
{

    for ( size_t i = 0; i < strlen(str); i++) {
        if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U' )
            str[i] = '*';
    }
    return str;
}

int main()
{
    char str[100];
    std::cout << "Enter string to replace every vowel in the string with the '*' character" << std::endl;
    std::cin.getline(str, 100);

    char* vowels = vowelsInString(str);
    std::cout << "vowels in string replaced with '*' character : " << std::endl;
    for (size_t i = 0; str[i] != '\0'; i ++)
    {
        std::cout << vowels[i];
    }
    return EXIT_SUCCESS;
}