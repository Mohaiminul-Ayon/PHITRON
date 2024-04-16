#include<bits/stdc++.h>

using namespace std;

int** fun()//double pointer use kora hoise

{
    int *a = new int;// new int ta ekta address create korse dynamic memory te heap e
                    //jaa ststic memory a te rakha hoise 
                    //ekn *a te dereferance kore variable nibo 
   *a = 10;
    cout<<"fun er  "<< a<<endl;
    return &a;
}

int main()
{
    int **p = fun();//double pointer  diye recive  kora hoise

    cout<<"main er "<<p<<endl;
    return 0;
}