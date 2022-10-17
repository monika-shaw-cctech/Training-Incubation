//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept a number and check if it is negative.

#include <cstdlib>
#include <iostream>

int checkNegative( int *num)
{
    int returnValue;
    if (*num < 0)
        returnValue = EXIT_SUCCESS;
    else
        returnValue = EXIT_FAILURE;

    return returnValue;
}

int main()
{
    int number, result;
    std::cout << "Enter a number to check if it is Negative" << std::endl;
    std::cin >> number;

    result = checkNegative(&number);

    if (result == 0)
        std::cout << "The number you entered is Negative: " << number << std::endl;
    else
        std::cout<< "The number you entered is not Negative: " << number << std::endl;

    return EXIT_SUCCESS;
}