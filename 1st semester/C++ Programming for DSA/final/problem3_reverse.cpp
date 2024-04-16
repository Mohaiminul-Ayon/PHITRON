#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
class student 
{
    public :
    string name;
    int clas;
    string sec;
    int roll;
};
int main() 
{
    int n;
    cin>>n;
    
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        cin>>a[i].name>>a[i].clas;
        cin.ignore();
        cin>>a[i].sec>>a[i].roll;
    }
    int i=0;
    int j=n-1;
    string temp;
    while(i<j)
    {
        temp=a[i].sec;
        a[i].sec=a[j].sec;
        a[j].sec=temp;
        i++;
        j--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].clas<<" "<<a[i].sec<<" "<<a[i].roll<<endl;
    }
    

    return 0;
}
