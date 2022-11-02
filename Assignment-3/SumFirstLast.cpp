//
// Created by Monika Shaw on 31-10-2022.
//
//Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.

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

int sumOfFirstAndLast(int *number)
{
    int sum = 0, first, last;

    last = *number % 10;
    while (*number >= 10)
    {
        *number = *number/10;
    }

    first = *number;

    sum = first + last;
    return sum;
}

int main()
{
    int num,temp;
    std::cout << "Enter a 5 digit number" << std::endl;
    std::cin >> num;
    temp = num;

    int len = findLength(num);

    if (len == 5)
    {
        int sum = sumOfFirstAndLast(&num);
        std::cout << "sum of first and last digits of " << temp << " is : " << sum << std::endl;
        return EXIT_SUCCESS;
    }

    std::cout << "Sorry, you have to enter 5 digits integer" << std::endl;

    return EXIT_FAILURE;
}