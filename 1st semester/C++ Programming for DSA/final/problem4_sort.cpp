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
    int mt;
    int en;
    int sum;
};
bool freq(student a , student b)
{
    if(a.sum == b.sum)
    {
       return a.roll<b.roll;
    }
    else
   return a.sum>b.sum;
}
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
        cin>>a[i].sec>>a[i].roll>>a[i].mt>>a[i].en;

        a[i].sum=a[i].mt+a[i].en;
    }
    sort(a,a+n,freq);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].clas<<" "<<a[i].sec<<" "<<a[i].roll<<" "<<a[i].mt<<" "<<a[i].en<<endl;
    }
    


    

    return 0;
}
