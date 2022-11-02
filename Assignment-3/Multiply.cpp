//
// Created by Monika Shaw on 31-10-2022.
//
/*
 	Write a program to accept a list L1 of N integers. Accept integer M.
 	Multiply each integer in the list by M and generate a new list L2. Print the lists L1 and L2.
 */
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <list>
#include <stddef.h>

void multiplyList(std::list<int> l1, int n1)
{
    int m;
    std::cout << "Enter M to to multiply" << std::endl;
    std::cin >> m;

    int elements;
    std:: cout << "Enter elements in list 1 " << std::endl;
    for (size_t i = 0; i < n1; i ++) {
        std::cin >> elements;
        l1.push_back(elements);
    }

    std::cout << "List 1 : ";
    for (auto i = l1.begin(); i != l1.end(); i ++) {
        std::cout << *i << " ";
    }

    std::cout << std::endl;
    std::cout << "List 2 : ";
    for (auto i = l1.begin(); i != l1.end(); i ++) {
        std::cout << *i * m << " ";
    }
}

int main()
{
    int n;
    std::cout << "Enter the size N" << std::endl;
    std::cin >> n;

    std::list<int> list1;
    multiplyList(list1, n);

    return EXIT_SUCCESS;
}