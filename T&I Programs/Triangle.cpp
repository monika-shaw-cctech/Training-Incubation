//
// Created by Monika Shaw on 29-09-2022.
//
#include <iostream>
#include <cassert>
using namespace std;

string typeOfTriangle(int s1, int s2, int s3)
{
    string exitValue;
    if(s1 == s2 && s2 == s3)
        exitValue = "Equilateral Triangle";
    else  if(s1 == s2 || s1 == s3 || s2 == s3)
        exitValue = "Isosceles Triangle";
    else if((s1*s1) + (s2*s2) == (s3*s3))
        exitValue = "Right angled Triangle";
    else
        exitValue = "Scalene Triangle";

    return exitValue;

}

void test()
{
    assert(typeOfTriangle(10,10,10) == "Equilateral Triangle");
    assert(typeOfTriangle(3,4,5) == "Right angled Triangle");
    assert(typeOfTriangle(10,20,20) == "Isosceles Triangle");
    assert(typeOfTriangle(10,20,30) == "Scalene Triangle");

}
int main()
{
    int s1,s2,s3,n;
    cout<<"How many Sets of Test cases do you want"<<endl;
    cin>>n;
    for(int i = 0; i< n; i++) {
        cout << "Enter the 3 sides of Triangle" << endl;
        cin >> s1 >> s2 >> s3;
        string result;
        result = typeOfTriangle(s1, s2, s3);
        cout << result << endl;
    }
    test();
    return EXIT_SUCCESS;
}