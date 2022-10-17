//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept a number N and print the first N even numbers.

#include <cstdlib>
#include <iostream>
#include <stddef.h>

void even( size_t *num)
{
    for (size_t i = 1; i <= *num; i++)
    {
        if ( i % 2 == 0)
        std::cout << i << " ";
    }
}

int main()
{
    size_t number;
    std::cout << "Enter a number " << std::endl;
    std::cin >> number;

    even(&number);

    return EXIT_SUCCESS;
}