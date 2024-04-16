#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    // list<int>mlist={10,20,30,40,50};
    // mlist.resize(2);
    // mlist.resize(5,100);
    // for(int val:mlist)
    // {
    //     cout<<val<<" ";
    // }
    // list<int>list1;
    // list1=mlist;

    // for(int val:list1)
    // {
    //     cout<<val<<" ";
    // }
    list<int>mlist={10,20,30,40,50,60,70};
    list<int>list1={100,200,300};
    vector<int>v ={10,20,30,40,50};
    // list <int>list1;
    // list1.assign(mlist.begin(),mlist.end());
    //     mlist.push_back(10);
    // mlist.push_front(100);
    // mlist.pop_back();
    // mlist.pop_front();
    // mlist.insert(next(mlist.begin(),3),v.begin(),v.end());
    // mlist.insert(next(mlist.begin(),3),{100,200,300});
    // mlist.insert(next(mlist.begin(),3),);
    mlist.erase(next(mlist.begin(),3),next(mlist.begin(),4));
    
    for(int val:mlist)
    {
        cout<<val<<" "; 
    }
    

    return 0;
}
