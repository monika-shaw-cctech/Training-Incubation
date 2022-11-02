//
// Created by Monika Shaw on 31-10-2022.
//
//Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits.

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

int sumOfDigits(int *number)
{
    int sum = 0, rem;
    while (*number != 0)
    {
        rem = *number % 10;
        sum = sum + rem;
        *number = *number / 10;
    }
    return sum;
}

int main()
{
    int num, temp;
    std::cout << "Enter a number to find sum of it's digits " << std::endl;
    std::cin >> num;
    temp = num;

    int len = findLength(num);
    if (len > 5)
    {
        std::cout << "N can have maximum 5 digits" << std::endl;
        return EXIT_FAILURE;
    }

    int sum = sumOfDigits(&num);
    std::cout << "sum of digits of " << temp << " is : " << sum << std::endl;

    return EXIT_SUCCESS;
}