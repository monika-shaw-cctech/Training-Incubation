//
// Created by Monika Shaw on 29-09-2022.
//

#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;
string pointOfCircle(double cx, double cy, double radius, double x, double y)
{
    double distance;
    string exitValue;
    distance =  sqrt( pow( (x - cx), 2 ) + pow( (y - cy), 2 ) );
    if(distance < radius)
    {
        exitValue = "Point is inside the Circle";
    }
    else if(distance > radius)
    {
        exitValue = "Point is outside the Circle";
    }
    else
    {
        exitValue=  "Point is on the Circle";
    }

    return exitValue;

}

void test()
{
    assert(pointOfCircle(0,0,6,2,2) == "Point is inside the Circle");
    assert(pointOfCircle(0,0,6,8,8) == "Point is outside the Circle");
    assert(pointOfCircle(6,6,6,3,3) == "Point is on the Circle");
}
int main()
{
    double cx,cy,radius, x,y;
    cout<<"Enter the center points:"<<endl;
    cin>>cx>>cy;
    cout<<"Enter the radius of circle"<<endl;
    cin>>radius;
    cout<<"Enter the points x and y"<<endl;
    cin>>x>>y;
    string result;
    result = pointOfCircle(cx,cy,radius,x,y);
    cout<<result<<endl;
    test();


}