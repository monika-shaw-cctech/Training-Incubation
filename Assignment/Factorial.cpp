//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept a number N and calculate N!

#include <cstdlib>
#include <iostream>

int factorial( size_t *num)
{
    size_t fact = 1;
    for (size_t i = 1; i <= *num; i++){
        fact = fact*i;
    }
    return fact;
}

int main()
{
    size_t number, result;
    std::cout<<"Enter a number to calculate Factorial"<<std::endl;
    std::cin>>number;
    if (number < 0)
        std::cout<<"Sorry, You can not calculate factorial for negative numbers"<<std::endl;
    else {
        result = factorial(&number);
        std::cout << number <<"! : "<< result << std::endl;
    }

    return EXIT_SUCCESS;
}