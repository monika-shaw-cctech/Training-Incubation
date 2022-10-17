//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept 2 numbers A,B and check if A is divisible by B.

#include <cstdlib>
#include <iostream>

int divisible( int *num1, int *num2)
{
    int returnValue;
    if (*num1 % *num2 == 0)
        returnValue = EXIT_SUCCESS;
    else
        returnValue = EXIT_FAILURE;

    return returnValue;
}

int main()
{
    int a, b, result;
    std::cout << "Enter two number a and b" << std::endl;
    std::cin >> a >> b;

    result = divisible(&a,&b);

    if (result == 0)
        std::cout<< "a is divisible by b: "<<a<<","<<b<<std::endl;
    else
        std::cout << "a is not divisible by b: " << a << "," << b << std::endl;

    return EXIT_SUCCESS;
}