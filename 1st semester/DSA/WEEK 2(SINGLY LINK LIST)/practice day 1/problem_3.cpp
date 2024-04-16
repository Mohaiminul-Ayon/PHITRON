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
void insert(node *&head,node *&tail, int val)
{
    node * newnode = new node (val);
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;
}
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
void odd(node * head,int pos)
{
    node * output;
    node * tmp =head;

    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    output=tmp;
    cout<<output->val;
}
void even(node * head,int pos)
{
    node * output;
    node * tmp =head;

    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    output=tmp;
    cout<<output->val<<" "<<output->next->val;
}
int main() 
{
    node * head= NULL;
    node * tail=NULL;   

    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
    }
    int sz = size(head);
    // cout<<sz<<endl;
    if(sz%2==1)
    {
        int o=(sz/2)+1;
        odd(head,o);
    }
    else if(sz%2==0)
    {
        int e=sz/2;
        even(head,e);
    }

    return 0;
}
