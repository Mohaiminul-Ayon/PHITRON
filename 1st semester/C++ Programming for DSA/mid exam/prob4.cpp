#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
class Student{
    public:
    int ID;
    char name[100];
    char sec[100];
    int num;
    // Student(int ID,char name[],char sec[],int num)
    // {
    //     this->ID=ID;
    //     strcpy(this->name,name);
    //     strcpy(this->sec,sec);
    //     this->num=num;
    // }
};
int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
         Student a,b,c;
    cin>>a.ID>>a.name>>a.sec>>a.num;
    cin>>b.ID>>b.name>>b.sec>>b.num;
    cin>>c.ID>>c.name>>c.sec>>c.num;


    int val = max({a.num,b.num,c.num});
    if(val == a.num)
    {
        cout<<a.ID<<" "<<a.name<<" "<<a.sec<<" "<<a.num;
    }
    else if(val == b.num)
    {
        cout<<b.ID<<" "<<b.name<<" "<<b.sec<<" "<<b.num;
    }
    else if(val == c.num)
    {
        cout<<c.ID<<" "<<c.name<<" "<<c.sec<<" "<<c.num;
    }
    cout<<endl;
    }
    
   

    return 0;
}
