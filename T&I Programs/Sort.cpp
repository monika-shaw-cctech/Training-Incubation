//
// Created by Monika Shaw on 29-09-2022.
//

#include<iostream>
#include<string.h>
using namespace std;




int main()
{
    int n;
    cout<<"Enter number of names"<<endl;
    cin>>n;
    char str[n][20], t[20];
    int i, j;
    cout<<"Enter Names "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>str[i];
    }


    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(strcmp(str[j], str[j+1])>0)
            {
                strcpy(t, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], t);
            }
        }
    }
    cout<<"Names in Alphabetical Order"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<" ";
        cout<<str[i]<<endl;
    }
    return 0;
}