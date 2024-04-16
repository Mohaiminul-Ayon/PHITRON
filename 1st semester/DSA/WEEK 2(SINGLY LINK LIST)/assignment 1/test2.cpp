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
void print_linnk_list(node * head)
{
    // cout<<endl<<endl<<"your link list :  ";
    node * tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
   cout<<endl;
}
bool check(node * head2,int x)
{
    if(head2==NULL)
    {
        return 0;
    }
    for(node * i = head2;i!=NULL;i=i->next)
    {
        if(i->val==x)
        {
            return 1;
        }

    }
    return 0;
}
int main() 
{
    node* head = NULL;
    node * tail = NULL;
    node * head2=NULL;
    node*tail2=NULL;
    

    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
    }

    for(node * i=head;i!=NULL;i=i->next)
    {
        if(check(head2,i->val)==0)
        {
            insert(head2,tail2,i->val);
        }
    }
    print_linnk_list(head2);
    

    return 0;
}
