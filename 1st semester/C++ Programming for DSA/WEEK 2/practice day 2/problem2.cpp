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
    int marks;

};
// bool freq(student a,student b)
// {
//     if(a.marks==b.marks)
//     {
//         return a.roll>b.roll;
//     }
//     else
//     return a.marks>b.marks;
// }


int main() 
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    reverse(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }

    

    return 0;
}
