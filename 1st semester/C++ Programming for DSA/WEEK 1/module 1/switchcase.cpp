#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

int main()
{
    int x;
    cin>>x;
    switch(x%2)
    {
        case 0:
            cout<<"even";
            break;
        case 1:
            cout<<"odd";
            break;
        default:
            cout<<"0";

    }
}
