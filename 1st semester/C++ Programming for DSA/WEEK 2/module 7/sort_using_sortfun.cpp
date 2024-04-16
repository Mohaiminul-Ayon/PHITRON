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
//customise compare function
bool cmp(student a,student b)
{
    if(a.clas==b.clas)
    {
        return a.roll < b.roll;
    }
    else
    return a.clas < b.clas;
}

int main() 
{
   int n;
   cin>>n;
   student a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i].name>>a[i].roll>>a[i].clas;
   }
   sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
   {
    cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].clas<<endl;
   }



    return 0;
}
