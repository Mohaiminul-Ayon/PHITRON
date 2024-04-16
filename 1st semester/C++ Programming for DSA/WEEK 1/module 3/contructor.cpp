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
int main() 
{
    Student ayon(67,12,4.17);
    //cin>>ayon.roll>>ayon.clas>>ayon.cgpa;

    cout<<ayon.roll<<" "<<ayon.clas<<" "<<ayon.cgpa<<endl;

    return 0;
}
