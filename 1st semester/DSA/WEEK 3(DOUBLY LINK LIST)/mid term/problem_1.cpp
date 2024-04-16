#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    // node * head=NULL;
    // node * tail=NULL;
    list<int>mlist;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
      mlist.push_back(val);
    }
    mlist.sort();
    mlist.unique();
    for(int val: mlist)
    {
        cout<<val<<" ";
    }
    // int N=size(head);


    

    return 0;
}
