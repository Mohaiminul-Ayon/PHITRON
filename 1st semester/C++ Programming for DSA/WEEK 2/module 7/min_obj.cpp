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
    // student(string name,int roll,int clas)
    // {
    //     this->name=name;
    //     this->roll=roll;
    //     this->clas=clas;
    // }
};

int main() 
{
   int n;
   cin>>n;
   student a[n];
   for(int i=0;i<n;i++)
   {
    // cin.ignore();
    // getline(cin,a[i].name);
    cin>>a[i].name>>a[i].roll>>a[i].clas;
   }
   student mn;
   mn.roll =INT_MAX;

   for(int i=0;i<n;i++)
   {
    if(a[i].roll<mn.roll)
    {
        mn=a[i];
    }


   }
     cout<<mn.name<<" "<<mn.roll<<" "<<mn.clas<<endl;
    return 0;
}
