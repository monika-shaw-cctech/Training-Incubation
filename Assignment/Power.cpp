//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept 2 numbers A,B and calculate A ^ B(A to the power B) .

#include <cstdlib>
#include <iostream>
#include <cmath>

int calPower( double *num1, double *num2)
{
    double power;
    power = pow (*num1, *num2);

    return power;
}

int main()
{
    double a, b, result;
    std::cout << "Enter two number a and b to calculate power" << std::endl;
    std::cin >> a >> b;

    result = calPower(&a,&b);
    std::cout << a << "^" << b << " : " << result << std::endl;

    return EXIT_SUCCESS;
}