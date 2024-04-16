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
        head= newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    newnode->pre=tail;
    tail=newnode;
}
void insert_head(node *& head,node*& tail,int val)
{
    node * newnode = new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;

    }
    else{
        newnode->next=head;
        head->pre=newnode;
        head=newnode;
    }
}
void insert_pos(node * head,int val,int pos)
{
    node * newnode = new node(val);

    node * tmp = head;
    for(int i= 1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->pre=newnode;
    newnode->pre=tmp;
}
void print(node * head)
{
    // cout<<endl<<endl<<"your link list :  ";
    node * tmp = head;
    cout<<"L -> ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void reverse_print(node * tail)
{
    // cout<<endl<<endl<<"your link list :  ";
    node * tmp = tail;
    cout<<"R -> ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->pre;
    }
    cout<<endl;
}

int main() 
{
    node * head =NULL;
    node * tail =NULL;

    int q;
    cin>>q;

    while(q--)
    {
            int pos,val;
    cin>>pos>>val;
    if(pos>size(head))
    {
        cout<<"Invalid"<<endl;
    }
    else if(pos==0)
    {
        insert_head(head,tail,val);
            print(head);
            reverse_print(tail);
    }
    else if(pos==size(head))
    {
        insert(head,tail,val);
            print(head);
            reverse_print(tail);
    }
    else{
        insert_pos(head,val,pos);
            print(head);
            reverse_print(tail);
    }


    }



     

    return 0;
}