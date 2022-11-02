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
    int temp = 0, rem;
    while (number > 0)
    {
        rem = number % 10;
        rem++;
        temp = temp * 10 + rem;
        number = number / 10;
    }

    number = temp;
    temp = 0;
    while (number > 0)
    {
        rem = number % 10;
        temp = temp * 10 + rem;
        number = number / 10;
    }
    return temp;
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