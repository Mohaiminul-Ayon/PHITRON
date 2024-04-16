#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;



int main()
{
    int n;
    cin>>n;

    //syntex
    //(condition likho)? condition true hoile ki hobe : condition false hoile ki hobe;
    (n%2==0)? cout<<"even"<<endl : cout<<"odd"<<endl;
    return 0;

}