//
// Created by Monika Shaw on 28-09-2022.
//
#include <iostream>
#include <cassert>

using namespace std;

int grossSalary(double basicSalary)
{
    double da, hra,gs;
    da = 0.40* basicSalary;
    hra = 0.20* basicSalary;
    gs = basicSalary+da+hra;
    return gs;
}

void testing()
{
    assert(grossSalary(2000) == 3200);
    assert(grossSalary(4000) == 200);
    assert(grossSalary(5000) == 320);
}

int main() {
    string name, address;
    size_t contact;
    double basicSalary;
    cout << "Enter name" << endl;
    getline(cin, name);
    cout << "Enter address" << endl;
    getline(cin, address);
    cout << "Enter contact no." << endl;
    cin >> contact;
    cout << "Enter you Basic Salary" << endl;
    cin >> basicSalary;
    double grossSal;
    grossSal = grossSalary(basicSalary);
    cout << "Gross Salary is : " << grossSal << endl;

    testing();
}