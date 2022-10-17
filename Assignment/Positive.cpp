//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept a number and check if it is positive.

#include <cstdlib>
#include <iostream>

int checkPositive( int *num)
{
    int returnValue;
    if (*num > 0)
        returnValue = EXIT_SUCCESS;
    else
        returnValue = EXIT_FAILURE;

    return returnValue;
}

int main()
{
    int number, result;
    std::cout<<"Enter a number to check if it is Positive"<<std::endl;
    std::cin>>number;

    result = checkPositive(&number);

    if (result == 0)
        std::cout << "The number you entered is Positive: "<< number << std::endl;
    else
        std::cout << "The number you entered is not Positive: " << number << std::endl;

    return EXIT_SUCCESS;
}