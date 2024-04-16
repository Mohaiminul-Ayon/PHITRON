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
    // cout<<endl<<endl;
}
void reverse(node*&head,node *cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
int main() 
{
    node * head =NULL;
    node * tail =NULL;
    
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
    }
    // node * head = new node(10);
    // node * a = new node(20);
    // node * b = new node(30);

    // head->next=a;
    // a->next=b;

    reverse(head,head);
    print_linnk_list(head);
    return 0;
}
