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
    if(a.en==b.en)
    {
        if(a.mt==b.mt)
        {
            return a.roll<b.roll;
        }
        else
          return a.mt>b.mt;
    }
    else
    return a.en>b.en;


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

        // a[i].sum=a[i].mt+a[i].en;
    }
    sort(a,a+n,freq);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].clas<<" "<<a[i].sec<<" "<<a[i].roll<<" "<<a[i].mt<<" "<<a[i].en<<endl;
    }
    


    

    return 0;
}
