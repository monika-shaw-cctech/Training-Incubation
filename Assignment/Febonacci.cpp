//
// Created by Monika Shaw on 17-10-2022.
//
//Write a program to accept a number N and print the first N terms of the Fibonacci series.

#include <cstdlib>
#include <iostream>

int fibonacci( int *num)
{
    int n1 = 0, n2 = 1, n3;
    std::cout << "First " << *num << " fibonacci series" << std::endl;
    std::cout << n1 <<" " << n2 << " ";
    for (int i = 2; i < *num; i++)
    {
        n3 = n1 + n2;
        std::cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }

}

int main()
{
    int number;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>number;

    fibonacci(&number);

    return EXIT_SUCCESS;
}