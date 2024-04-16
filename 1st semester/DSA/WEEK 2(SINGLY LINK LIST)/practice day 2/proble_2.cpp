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
int  size(node * head)
{
    node * tmp =head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;

}
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
void print_reverse(node * n)
{
    if(n==NULL) return;

    int x = n->val;
    print_reverse(n=n->next);
      cout<<x<<" ";

            // cout<<"1"<<" ";

}

int main() 
{
    node * head=NULL;
    node *tail =NULL;


    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
    }

    print_reverse(head);

    

    return 0;
}
