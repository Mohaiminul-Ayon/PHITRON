#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{

    // list<int>mylist(10,5);
    list<int>mylist={1,2,3,4,5,6};
    // for (auto it = mylist.begin(); it!= mylist.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    for(int val:mylist)
    {
        cout<< val<<" ";
    }    

    return 0;
}
