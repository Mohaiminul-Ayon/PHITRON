#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    // string s="Hello world";// string ta ekta class
    // cout<<s.size()<<endl;//string tar size
    // cout<<s.max_size()<<endl;//10^6 max 
    //                             //string ta shorboccho koto size nite parbe
     
    // string a;
    // cout<<a.capacity()<<endl;
    // cout<<a.capacity()<<endl;
    // a="josdjsjfiweiuffhhjsdnuishdfunsdkcjvnndhfuhfnjisvhcuih";

    //     cout<<a.capacity()<<endl;

    // string s="Hello ayon";
    // cout<<s<<endl;
    // s.clear();
    // cout<<s<<endl;
    // cout<<s.size()<<endl;

    // string s="Hello";
    // s.clear();
    // if(s.empty()==true) cout<<"empty"<<endl;
    // else cout<<"not empty"<<endl;

    string s;
    cin>>s;
    cout<<s<<endl;
    //s.resize(8);
    s.resize(20,'x');
    cout<<s.size()<<endl;
    cout<<s<<endl;


    return 0;
}
