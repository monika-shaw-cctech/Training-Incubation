//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept a number and check if it is prime.

#include <iostream>
#include <cstdlib>

int checkPrime( size_t *num)
{
    size_t count = 0, returnValue;
    for (size_t i = 1; i <= *num; i++)
    {
        if (*num % i == 0)
            count ++;
    }
    if (count == 2)
        returnValue = EXIT_SUCCESS;
    else
        returnValue = EXIT_FAILURE;

    return returnValue;
}

int main()
{
    size_t number, result;
    std::cout << "Enter a number to check if it is Prime" << std::endl;
    std::cin >> number;

    result = checkPrime(&number);

    if (result == 0)
        std::cout << "The number you entered is Prime: "<< number << std::endl;
    else
        std::cout << "The number you entered is not Prime: "<< number << std::endl;

    return EXIT_SUCCESS;
}