//
// Created by Monika Shaw on 31-10-2022.
//
/*
 	Write a program to accept a list L1 of N integers. Accept integer D.
 	Generate list L2 such that it contains only those integers from list L1 which are divisible by D.
 	Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.
 */

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <list>
#include <stddef.h>
#include <vector>

void divisibleList(std::list<int> l1, int n1)
{
    int d;
    std::cout << "Enter D to test which elements are divisible by D " << std::endl;
    std::cin >> d;

    int elements;
    std::cout << "Enter the elements in list" << std::endl;
    for ( size_t i = 0; i < n1; i++)
    {
        std::cin >> elements;
        l1.push_back(elements);
    }

    std::cout << "List 1 : ";
    for (auto i = l1.begin(); i != l1.end(); i ++) {
        std::cout << *i << " ";
    }

    std::cout << "\nsize of List 1 : " << l1.size() << std::endl;
    std::cout << "Number D which is to be divisible be list 1 : " << d << std::endl;

    std::cout << "List 2 : ";
    std::vector<int> v;
    for (auto i = l1.begin(); i != l1.end(); i ++) {
        if ( *i % d == 0) {
            v.push_back(*i);
        }
    }

    for (size_t i = 0; i < v.size(); i++ )
    {
        std::cout << v[i] <<" ";
    }
    std::cout << "\nsize of List 2 : " << v.size() << std::endl;
}

int main()
{
    int n;
    std::cout << "Enter the size N" << std::endl;
    std::cin >> n;

    std::list<int> list1;
    divisibleList(list1, n);

    return EXIT_SUCCESS;
}