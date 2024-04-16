#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    // vector <int> v={1,3,3,2,6,4,6,4,1,2,3,4,2};

    // replace(v.begin(),v.end(),3,100);//ekhane 4 ta jinish dite hobe vectorer koto tuku data er moddhe chacge korbo tar begining and end ,kon value change korbo and replace kore ki value boshabo
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }

    //find

    vector <int> v={1,3,3,2,6,4,6,4,1,2,3,4,2};

    auto it = find(v.begin(),v.end(),3);//ekhane it ekti ITERATOR
    // cout<<*it;
    if(it != v.end()) cout<<"found";
    else cout<<"not found";



    return 0;
}
