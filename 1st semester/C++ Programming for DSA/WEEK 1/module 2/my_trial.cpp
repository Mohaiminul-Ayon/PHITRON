#include<bits/stdc++.h>

using namespace std;

int** fun()
{
    int *a = new int;
    *a = 100;
    cout<<"fun stack: "<< &a <<endl; //stack er moddhe a er address 0x61fefc(xyz)
    //cout<<"fun heap: "<< a <<endl; // heap er address 0xf71910(abc)
    return &a;//heap/dynamic memory er address send korse 0xf71910(abc)
}
int main()
{
    int **p=fun();
    cout<<p<<endl;//p er value heap er adress(abc)

    return 0;
}