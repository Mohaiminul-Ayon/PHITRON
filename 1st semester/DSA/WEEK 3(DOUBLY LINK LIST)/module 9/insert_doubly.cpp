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
void insert_tail(node* &head,node* &tail,int val)
{
    node * newnode = new node(val);
    if(tail==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->pre=tail;
    tail->next=newnode;
    tail=newnode;
    
}
void print_linnk_list(node * head)
{
    cout<<"your link list :  ";
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
    cout<<"your link list reverse :  ";
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
    node * head=NULL;
    node * tail=NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    print_linnk_list(head);
    print_linnk_list_reverse(tail);

    return 0;
}
