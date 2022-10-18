//
// Created by Monika Shaw on 18-10-2022.
//
//Write a program to accept a string and a position P. Print the character at position P in the string.

#include <cstdlib>
#include <iostream>

char positionOfChar( int pos, char* str)
{
    char temp = str[pos];
    return temp;
}

int main()
{
    char str[100];
    int position;
    std::cout << "Enter string and position" << std::endl;
    std::cin.getline(str, 100);
    std::cin >> position;

    char charPosition = positionOfChar(position, str);
    std::cout << "Character at Position " << position << " : "<< charPosition << std::endl;

    return EXIT_SUCCESS;
}