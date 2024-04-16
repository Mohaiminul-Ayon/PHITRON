#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
class student
{
    public:
        string name;
        int roll;
        int clas;

};

int main() 
{
   int n;
   cin>>n;
   student a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i].name>>a[i].roll>>a[i].clas;
   }
   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(a[i].clas > a[j].clas)
        {
            swap(a[i],a[j]);
        }
        if(a[i].clas == a[j].clas)
        {
            if(a[i].roll>a[j].roll)
            {
                swap(a[i],a[j]);
            }
        }
    }
   }
   for(int i=0;i<n;i++)
   {
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].clas<<endl;
   }

    return 0;
}
