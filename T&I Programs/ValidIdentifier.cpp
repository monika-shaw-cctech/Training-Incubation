//
// Created by Monika Shaw on 29-09-2022.
//

#include <iostream>
#include <cassert>
using namespace std;

bool isValidIdentifier(string str, int n)
{
    if (!((str[0] >= 'a' && str[0] <= 'z')
          || (str[0] >= 'A' && str[0] <= 'Z')
          || str[0] == '_'))
        return false;

    for (int i = 1; i < str.length(); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z')
              || (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')
              || str[i] == '_'))
            return false;
    }
    return true;
}

void testcases()
{
    assert(isValidIdentifier("ab%c_",4) ==false);
    assert(isValidIdentifier("abc_",4) ==true);
    assert(isValidIdentifier("%abc",4) ==false);
    assert(isValidIdentifier("7abc",4) ==false);
    assert(isValidIdentifier("abc_%",4) ==false);
}
int main()
{
    string str;
    getline(cin,str);
    int n = str.length();

    if (isValidIdentifier(str, n))
        cout << "Valid";
    else
        cout << "Invalid";

    testcases();
    return 0;
}

