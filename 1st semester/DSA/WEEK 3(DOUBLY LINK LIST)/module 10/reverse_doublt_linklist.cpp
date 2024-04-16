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
    node* pre;  
    node(int val)
    {
        this->val=val;
        this->next = NULL;
        this->pre = NULL;
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
    newnode->pre=tail;
    tail=newnode;
}
void reverse(node*head,node * tail)
{
    node * i = head;
    node * j = tail;

    while(i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->pre;
    }
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
void print_linnk_list_reverse(node * tail)
{
    // cout<<endl<<endl<<"your link list :  ";
    node * tmp = tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->pre;
    }
    cout<<endl;
}

int main() 
{
    node* head=NULL;
    node* tail=NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
    }
    reverse(head,tail);
    print_linnk_list(head);
    // print_linnk_list_reverse(tail);

    return 0;
}