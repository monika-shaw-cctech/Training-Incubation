//
// Created by Monika Shaw on 18-10-2022.
//
//Write a program to accept a string and calculate its length.

#include <cstdlib>
#include <iostream>
#include <stddef.h>

int calculateLength(char *str)
{
    int length = 0;
    for (size_t i = 0; i < str[i] != '\0'; i ++){
        length ++;
    }
    return length;
}

int main()
{
    char str[100];
    std::cout << "Enter string to calculate its length " << std::endl;
    std::cin.getline(str, 100);

    int lengthOfString = calculateLength(str);
    std::cout << "Length of string is : " << lengthOfString <<std::endl;
    return EXIT_SUCCESS;
}