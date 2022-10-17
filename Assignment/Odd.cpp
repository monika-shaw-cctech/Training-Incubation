//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept a number and check if it is odd.

#include <cstdlib>
#include <iostream>

int checkOdd( int *num)
{
    int returnValue;
    if (*num % 2 == 1 || *num % 2 == -1)
        returnValue = EXIT_SUCCESS;
    else
        returnValue = EXIT_FAILURE;

    return returnValue;
}

int main()
{
    int number, result;
    std::cout << "Enter a number to check if it is odd" << std::endl;
    std::cin >> number;

    result = checkOdd(&number);

    if (result == 0)
        std::cout << "The number you entered is odd: "<< number << std::endl;
    else
        std::cout << "The number you entered is not odd: " << number << std::endl;

    return EXIT_SUCCESS;
}