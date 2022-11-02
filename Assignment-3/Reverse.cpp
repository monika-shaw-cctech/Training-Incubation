//
// Created by Monika Shaw on 31-10-2022.
//
//Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. Please note N can have maximum 5 digits.

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

int reverse(int *number)
{
    int rev = 0, rem;
    while (*number != 0)
    {
        rem = *number % 10;
        rev = rev * 10 + rem;
        *number = *number / 10;
    }
    return rev;
}

int main()
{
    int num, temp;
    std::cout << "Enter a number to reverse it" << std::endl;
    std::cin >> num;
    temp = num;

    int len = findLength(num);
    if (len > 5)
    {
        std::cout << "N can have maximum 5 digits" << std::endl;
        return EXIT_FAILURE;
    }

    int rev = reverse(&num);
    std::cout << "reverse of " << temp << " is : " << rev << std::endl;

    return EXIT_SUCCESS;
}