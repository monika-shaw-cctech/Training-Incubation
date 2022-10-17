//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept a number N and print the first N odd numbers.

#include <iostream>
#include <cstdlib>
#include <stddef.h>

void odd( size_t *num)
{
    for (int i = 1; i <= *num; i++)
    {
        if (i % 2 == 1)
            std::cout<<i<<" ";
    }

}

int main()
{
    size_t number;
    std::cout << "Enter a number " << std::endl;
    std::cin >> number;

    odd(&number);

    return EXIT_SUCCESS;
}