//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept a number N and print the first N odd numbers.

#include <iostream>
#include <cstdlib>
#include <stddef.h>

void odd( size_t *num)
{
    std::cout << "First " << *num << " odd numbers are : ";
    for (int i = 1; i <= *num; i++)
    {
        std::cout << 2 * i - 1 << " ";
    }
    std::cout << std::endl;
}

int main()
{
    size_t number;
    std::cout << "Enter a number " << std::endl;
    std::cin >> number;

    odd(&number);

    return EXIT_SUCCESS;
}