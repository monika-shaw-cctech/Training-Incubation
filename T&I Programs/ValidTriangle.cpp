//
// Created by Monika Shaw on 29-09-2022.
//
#include <iostream>
#include <cassert>
using namespace std;

bool validTriangles(int a, int b, int c)
{
    bool exitValue;
    if (a + b + c == 180 && a != 0 && b != 0 && c != 0) {
        exitValue = true;
    }
    else {
        exitValue = false;
    }

    return exitValue;
}

void test()
{
    assert(validTriangles(90,90,9) == false);
    assert(validTriangles(90,90,0) == false);
    assert(validTriangles(45,90,45) == true);

}
int main()
{
    int a, b, c;
    cout<<"Enter the angles"<<endl;
    cin>>a>>b>>c;
    bool result;
    validTriangles(a, b, c);
    if(result == true)
        cout << "Valid Triangle";
    else
        cout << "Invalid Triangle";

    test();
    return 0;
}