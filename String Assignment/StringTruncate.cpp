//
// Created by Monika Shaw on 18-10-2022.
//
/*Write a program to accept a string STR1, starting position P and length L.
 Extract from the given string STR, starting from position P, L characters
 into another string STR2. e.g. STR1="BATATA", P=2, L=4. Then STR2="ATAT".*/

#include <cstdlib>
#include <iostream>
#include <stddef.h>
#include <vector>

void  stringTruncate( int pos, int len,  char* str1)
{
    std::vector<char> str2;
    for ( size_t i = pos; i < len+pos; i++)
    {
            str2.push_back(str1[i]);
    }

    std::cout << "str2 : ";
    for ( size_t i = 0; i < str2.size(); i++)
    {
     std::cout << str2[i];
    }
}

int main()
{
    char str1[100];
    int position, length;
    std::cout << "Enter string " << std::endl;
    std::cin.getline(str1, 100);

    std::cout<<"Enter position and length"<<std::endl;
    std::cin >> position >> length;

    std::cout << "str1 : "<< str1 << std::endl;
    stringTruncate(position, length, str1);

    return EXIT_SUCCESS;
}