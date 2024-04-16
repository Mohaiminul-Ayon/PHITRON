// pos insert in doubly link list

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
void insert_pos(node*&head,int pos,int val)
{
    node * newnode = new node(val);
    if(pos==0)
    {
        newnode->next=head;
        head->pre=newnode;
        head=newnode;
        return;
    }
    
    node * tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->pre=newnode;
    newnode->pre=tmp;
    
}
void insert_head(node * &head,node *& tail,int val)
{
    node * newnode = new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
}
void insert_tail(node * &head,node *& tail,int val)
{
    node * newnode = new node(val);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->pre=tail;
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
    cout<<"your link list reverse:  ";
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
    node * head =NULL;
    node * tail =NULL;
    // node * head =new node(10);
    // node * a =new node(20);
    // node * b =new node(30);
    // node * c =new node(40);

    // head->next=a;
    // a->next=b;
    // b->next=c;

    // a->pre=head;
    // b->pre=a;
    // c->pre=b;

    // node * tail = c;
    int val;
    cin>>val;
    insert_tail(head,tail,val);
    print_linnk_list(head);
    print_linnk_list_reverse(tail);

    // if(pos>size(head))
    // {
    //     cout<<"invalid index";
    // }
    // else if(pos==0)
    // {
    //     insert_head(head,tail,val);
    //         print_linnk_list(head);
    //         print_linnk_list_reverse(tail);
    // }
    // else if(pos==size(head))
    // {
    //     insert_tail(head,tail,val);
    //                 print_linnk_list(head);
    //         print_linnk_list_reverse(tail);
    // }
    // else {
    //         insert_pos(head,pos,val);
    //         print_linnk_list(head);
    //         print_linnk_list_reverse(tail);
    // }




    return 0;
}
