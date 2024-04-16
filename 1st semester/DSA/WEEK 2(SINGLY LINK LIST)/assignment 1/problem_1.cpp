#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
class node{
    public:
    int val;
    node* next;  
    node(int val)
    {
        this->val=val;
        this->next = NULL;
    }
};
void insert(node*&head,node *&tail,int val)
{
    node * newnode = new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

int main() 
{
    node * head =NULL;
    node * head =NULL;
    node * tail =NULL;
    node * tail =NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val == -1) break;
        insert(head,tail,val);
    }
    int  mx = INT_MIN;
    int mn = INT_MAX;

    for(node * i=head;i!=NULL;i=i->next)
    {
        if(i->val>mx)
        {
            mx=i->val;
        }
        if(i->val<mn)
        {
            mn=i->val;
        }
    }
    
    int y = mx-mn;
    cout<<y;

    return 0;
}
