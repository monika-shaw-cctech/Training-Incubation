//
// Created by Monika Shaw on 02-11-2022.
//
/*
 Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle.
 Select appropriate data structure and explain why you chose it.
 Arrange the circles in increasing order of their area and print all the data of each circle
 */

/*
 * which data structure I choose and why ?
 * I choose pair which comes under Standard Template Library(STL) and defined in utility header file.
 * I choose this because it is used to combine two values that may be of same or different data types.
 * We are using coordinates which is consists two values as a single entity. Pair provides a way to
 * store two heterogeneous objects as a single unit. Pair is just for grouping together exactly 2
 * objects (say, "coordinates on a page" consists of X and Y)
 * It is a simple sequence of paired Xs and Ys. They remain in the order you put it in, and can hold
 * any number of duplicates.
 */

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <stddef.h>
#include <vector>
#include <utility>

#define PI 3.14

void printAllData( int n, std::pair<int,int> coordinates, int radius, double area )
{
    std::cout << "Data of Circle " << n+1 << std::endl;
    std::cout << "radius : " << radius << ", coordinates : ( " << coordinates.first << ", " << coordinates.second << " ) and area : " << area << "cm^2 " << std::endl << std::endl;

}

void printAllArea( std::vector<double > v)
{
    sort(v.begin(), v.end());
    std::cout << "All the circles in increasing order of their area : " << std::endl;
    for(size_t i = 0; i < v.size(); i ++)
    {
        std::cout << v[i] << " ";
    }
}

void circle( std::pair<int,int> coordinates, int n)
{
    std::vector<double > v;
    for(size_t i = 0; i < n; i ++)
    {
        double area = 0;
        int radius = 0;
        std::cout << "Enter radius in cm" << std::endl;
        std::cin >> radius;
        std::cout << "Enter Co-ordinates" << std::endl;
        std::cin >> coordinates.first >> coordinates.second;

        area = PI * radius * radius;
        v.push_back(area);

        printAllData(i, coordinates, radius, area);
    }

    printAllArea(v);
}

int main()
{
    int n;
    std::cout << "Enter the no of circle" << std::endl;
    std::cin >> n;

    std::pair <int,int> p;
    circle(p, n);

    return EXIT_SUCCESS;
}