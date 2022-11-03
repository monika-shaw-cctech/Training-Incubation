//
// Created by Monika Shaw on 31-10-2022.
//
//Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.

#include <cstdlib>
#include <iostream>

int findLength(int number)
{
    int count = 0;
    while (number != 0)
    {
        number = number / 10;
        count ++;
    }
    return count;
}

int AddOne(int number)
{
    const int Base = 10;
    return ( number % Base + 1 ) % Base + ( number / Base == 0 ? 0 : Base * AddOne( number / Base ) );
}

int main()
{
    int num, temp;
    std::cout << "Enter a 5 digit number" << std::endl;
    std::cin >> num;
    temp = num;

    int len = findLength(num);

    if (len == 5)
    {
        int newNum = AddOne(num);
        std::cout << "Adding 1 to each digit of " << temp << " is : " << newNum << std::endl;
        return EXIT_SUCCESS;
    }

    std::cout << "Sorry, you have to enter 5 digits integer" << std::endl;

    return EXIT_FAILURE;
}