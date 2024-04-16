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
Student *fun()
{
    int roll,clas;
    double cgpa;
    cin>>roll>>clas>>cgpa;
    Student* rahim = new Student(roll,clas,cgpa);
    return rahim;
}

int main() 
{
    Student *a = fun();
    
    cout<<a->roll<<" "<<a->clas<<" "<<a->cgpa<<endl;

    // Student *karim = fun();
    // cout<<karim->roll<<" "<<karim->clas<<" "<<karim->cgpa<<endl;

    delete a;
    
cout<<a->roll<<" "<<a->clas<<" "<<a->cgpa<<endl;
//      cout<<karim->roll<<" "<<karim->clas<<" "<<karim->cgpa<<endl;
 
    return 0;
}
