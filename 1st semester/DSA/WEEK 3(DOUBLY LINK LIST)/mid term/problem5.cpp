#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    list<int>mlist;

    int q;
    cin>>q;
    while(q--)
    {
        int x,val;
        cin>>x>>val;

        if(x==0)
        {
            mlist.push_front(val);

                    cout<<"L -> ";
                    for(int val: mlist)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;

                    list<int>mlist1(mlist);
                    mlist1.reverse();
                    cout<<"R -> ";

                    for(int val: mlist1)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;

        }
        else if(x==1)
        {
            mlist.push_back(val);

                    cout<<"L -> ";
                    for(int val: mlist)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;

                    list<int>mlist1(mlist);
                    mlist1.reverse();
                    cout<<"R -> ";

                    for(int val: mlist1)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;

        }
        else if(x==2)
        {
            if(val<mlist.size())
            {
                mlist.erase(next(mlist.begin(),val));

                    cout<<"L -> ";
                    for(int val: mlist)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;

                    list<int>mlist1(mlist);
                    mlist1.reverse();
                    cout<<"R -> ";

                    for(int val: mlist1)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;

            }
            else{
                    cout<<"L -> ";
                    for(int val: mlist)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;

                    list<int>mlist1(mlist);
                    mlist1.reverse();
                    cout<<"R -> ";

                    for(int val: mlist1)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;


                continue;
            }
   
        }


    }


    return 0;
}