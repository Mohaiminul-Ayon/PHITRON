#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
class person
{
    public:
    string name;
    int age;
    person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void hello()
    {
        cout<<name<<" "<<age<<endl;
    }
};
int main() 
{
    person ayon("ayon",21);
    person antu("antu",29);
    //cout<<ayon.name<<" "<<ayon.age<<endl;
    ayon.hello();
    antu.hello();
    return 0;
}
