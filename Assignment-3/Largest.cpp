//
// Created by Monika Shaw on 31-10-2022.
//
/*
 Write a program to accept a list of N integers.
 Find the largest and the smallest number in the list and their respective positions in the list.
 */

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <list>
#include <stddef.h>
#include <vector>

int  *calculateMax(std::list<int> l)
{
    static int result[2];

    result[0] = *max_element(l.begin(), l.end());
    std::vector<int> v(l.begin(), l.end());

    auto it = find (v.begin(), v.end(), result[0]);
    if (it != v.end())
    {
        result[1] =  it - v.begin();
    }
    return result;
}

int  *calculateMin(std::list<int> l)
{
    static int result[2];

    result[0] = *min_element(l.begin(), l.end());
    std::vector<int> v(l.begin(), l.end());

    auto it = find (v.begin(), v.end(), result[0]);
    if (it != v.end())
    {
        result[1] =  it - v.begin();
    }
    return result;
}

std::list<int> printList(std::list<int> l1, int n1)
{
    int elements;
    std::cout << "Enter the elements in list " << std::endl;
    for (size_t i = 0; i < n1; i ++)
    {
        std::cin >> elements;
        l1.push_back(elements);
    }

    int *max = calculateMax(l1);
    int *min = calculateMin(l1);

    std::cout << "maximum element is " << max[0] << " at position : " << max[1] + 1 << std::endl;
    std::cout << "minimum element is " << min[0] << " at position : " << min[1] + 1 << std::endl;

}

int main()
{
    int n;
    std::cout << " Enter the size N " << std::endl;
    std::cin >> n;

    std::list<int> list1;
    printList(list1, n);

    return EXIT_SUCCESS;
}