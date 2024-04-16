#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    list<int>mlist={20,10,50,60,33,10,55,99,15,10};

    // mlist.remove(10);
    // mlist.sort();
    // mlist.sort(greater<int>());
    // mlist.unique();
    mlist.reverse();

    for(int val:mlist)
    {
        cout<<val<<" ";
    }

    

    return 0;
}