//
// Created by Monika Shaw on 31-10-2022.
//
/*
 Write a program to accept cardinality of set A as N, and cardinality of set B as M. Then accept elements of set A and set B.
 Generate set C which is union of set A and set B, set D which is intersection set of set A and Set B.
 Print set A, B, C, D, Cardinality of set C, Cardinality of set D.
 */

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <stddef.h>
#include <vector>

void setUnion(int setA[], int n, int setB[], int n1)
{
    int len = n + n1;
    std::vector<int> v(len);
    std::vector<int>::iterator it, st;

    std::sort(setA, setA + n);
    std::sort(setB, setB + n);

    it = std::set_union(setA, setA + n, setB,
                        setB + n1, v.begin());


    std::cout << "Set C (union of set A and set B) : ";
    for (st = v.begin(); st != it; ++st)
        std::cout << ' ' << *st;
    std::cout << std::endl;
    std::cout << "Cardinality of set C : " << (it - v.begin())
              << std::endl << std::endl;

}

void setIntersection(int setA[], int n, int setB[], int n1)
{
    int len = n+n1;
    std::vector<int> v1(len);
    std::vector<int>::iterator it1, st1;

    std::sort(setA, setA + n);
    std::sort(setB, setB + n);
    it1 = std::set_intersection(setA, setA + n, setB,
                                setB + n1, v1.begin());


    std::cout << "Set D (intersection of set A and set B) : ";
    for (st1 = v1.begin(); st1 != it1; ++st1)
        std::cout << ' ' << *st1;
    std::cout << std::endl;
    std::cout << "Cardinality of set D : " << (it1 - v1.begin())
              << std::endl;

}
void printSets(int setA[], int n, int setB[], int n1)
{
    std::cout << "Enter elements in set A" << std::endl;
    for (size_t i = 0; i < n; i++)
        std::cin>>setA[i];
    std::cout << "set A contains :";
    for (size_t i = 0; i < n; i++)
        std::cout << " " << setA[i];
    std::cout << std::endl << std::endl;

    std::cout << "Enter elements in set B" << std::endl;
    for (size_t i = 0; i < n1; i++)
        std::cin >> setB[i];

    std::cout << "set B contains :";
    for (size_t i = 0; i < n1; i++)
        std::cout << " " << setB[i];
    std::cout << std::endl << std::endl;

    setUnion(setA, n, setB, n1);
    setIntersection(setA, n, setB, n1);
}

int main()
{
    int n, n1;
    std::cout << "Enter cardinality of set A" << std::endl;
    std::cin >> n;
    std::cout << "Enter cardinality of set B" << std::endl;
    std::cin >> n1;

    int first[n], second[n1];
    printSets(first, n, second, n1);

    return EXIT_SUCCESS;
}
