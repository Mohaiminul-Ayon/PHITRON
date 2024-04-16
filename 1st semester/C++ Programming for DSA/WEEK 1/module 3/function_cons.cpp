#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
class Student
{   
    public:
    int roll;
    int clas;
    double cgpa;

    Student(int roll,int clas,double cgpa)
    {
        this->roll=roll;
        this->clas=clas;
        this->cgpa=cgpa;
    }

};
Student* fun()
{
    Student rahim(10,2,4.50);
    Student *p = &rahim;
    return p;
}
int main() 
{
    Student* a = fun();
    cout<<a->roll<<" "<<a->clas<<" "<<a->cgpa<<endl;
 
    return 0;
}
