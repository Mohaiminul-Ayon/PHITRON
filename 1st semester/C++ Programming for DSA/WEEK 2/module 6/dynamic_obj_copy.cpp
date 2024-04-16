#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
class hii
{
    public:
        string name;
        int age;
    hii(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void print()
    {
        cout<<name<<" "<<age<<endl;
    }
};
int main() 
{
    hii* ayon =new hii("ayon",21);
    hii* antu =new hii("antu",20);
    *antu = *ayon;
    antu->print();
    

    return 0;
}
