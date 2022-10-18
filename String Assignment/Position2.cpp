//
// Created by Monika Shaw on 18-10-2022.
//
//Write a program to accept a string, a position P and a character T. Replace the character at position P in the string with character T.

#include <cstdlib>
#include <iostream>

char *positionOfChar( int pos, char value,  char* str)
{
    str[pos] = value;
    return  str;
}

int main()
{
    char str[100], ch;
    int position;
    std::cout << "Enter string " << std::endl;
    std::cin.getline(str, 100);
    std::cout<<"Enter position and character you want to replace"<<std::endl;
    std::cin >> position >> ch;

    std::cout << "Character at Position " << position << " before replaced in string : "<< str << std::endl;
    char *charPosition = positionOfChar(position, ch, str);
    std::cout << "Character at Position " << position << " after replaced in string  : "<< charPosition << std::endl;

    return EXIT_SUCCESS;
}