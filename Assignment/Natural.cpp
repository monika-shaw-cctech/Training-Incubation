//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept a number N and print the first N natural numbers.

#include <cstdlib>
#include <iostream>

void naturalNumbers( int *num)
{
    for (int i = 1; i <= *num; i++)
    {
        std::cout << i << " ";
    }

}

int main()
{
    int number;
    std::cout << "Enter a number " << std::endl;
    std::cin >> number;

    naturalNumbers(&number);

    return EXIT_SUCCESS;
}