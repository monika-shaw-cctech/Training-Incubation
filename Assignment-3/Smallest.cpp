//
// Created by Monika Shaw on 31-10-2022.
//
/*
 	Write a program to accept a list of N integers. Accept integer K.
 	Find the Kth smallest number in the list and its position.
 */

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <list>
#include <stddef.h>
#include <vector>

int *calculateKthMin(std::list<int> l)
{
    static int result[2];
    int k;
    std::cout << "Enter Kth smallest element" << std::endl;
    std::cin >> k;

    std::list<int> temp = l;
    temp.sort();

    std::list<int> ::iterator it = temp.begin();
    advance(it,k - 1);
    result[0] = *it;

    std::vector<int> v(l.begin(), l.end());
    auto it1 = find (v.begin(), v.end(), result[0]);
    if(it1 != v.end())
    {
        result[1] =  it1 - v.begin();
    }

    return result;
}

std::list<int> printList(std::list<int> l1, int n1)
{
    int elements;
    std::cout << "Enter the elements in list" << std::endl;
    for (size_t i = 0; i< n1; i++)
    {
        std::cin >>elements;
        l1.push_back(elements);
    }

    int *min = calculateKthMin(l1);
    std::cout << "kth smallest element is " << min[0] << " at position : " << min[1]+1 << std::endl;
}

int main()
{
    int n;
    std::cout << "Enter the size N" << std::endl;
    std::cin >> n;

    std::list<int> list1;
    printList(list1, n);

    return EXIT_SUCCESS;
}