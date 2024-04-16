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
void insert_head(node* &head,node* &tail,int val)
{
    node * newnode = new node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next=head;
    head->pre=newnode;
    head=newnode;
    
}
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
void insert_pos(node*& head,node*& tail,int val,int pos)
{
    node * newnode = new node(val);
    node *  tmp= head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    tmp->next->pre=newnode;
    newnode->pre=tmp;

}
void delet_pos(node* &head,node*&tail,int pos)
{
    node* tmp=head;
    node * deletnode;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    deletnode=tmp->next;

    tmp->next=tmp->next->next;

    tmp->next->pre=tmp;
    delete deletnode;

}
void delet_head(node * &head)
{
    node * deletnode;
    if(head==NULL)
    {
        cout<<"INVALID";
        return;
    }
    deletnode=head;
    head=head->next;
    delete deletnode;
    head->pre=NULL;

}
void delet_tail(node * &tail)
{
    node * deletnode;
    if(tail==NULL)
    {
        cout<<"INVALID";
        return;
    }
    deletnode=tail;
    tail=tail->pre;
    delete deletnode;
    tail->next=NULL;

}

// void insert(node*&head,node *&tail,int val)
// {
//     node * newnode = new node(val);
//     if(head==NULL)
//     {
//         head=newnode;
//         tail = newnode;
//         return;
//     }
//     tail->next=newnode;
//     newnode->pre=tail;
//     tail=newnode;
// }



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
    cout<<"your link list :  ";
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
    node* head =NULL;
    node* tail =NULL;
    while (true)
    {
     int op;
     cin>>op;
    if(op==1)
    {
        int pos,val;
        cin>>pos>>val;



        if(pos==0)
        {
            insert_head(head,tail,val);
            print_linnk_list(head);
            print_linnk_list_reverse(tail);
        }
        else   if(pos>size(head))
        {
            cout<<"INVALID";
        }
        else if(pos==size(head))
        {
            insert_tail(head,tail,val);
            print_linnk_list(head);
            print_linnk_list_reverse(tail);
        }
        else {
            insert_pos(head,tail,val,pos);
            print_linnk_list(head);
            print_linnk_list_reverse(tail);
        }
    }
    else if(op ==2)
    {
        int val;
        cin>>val;
            insert_tail(head,tail,val);
            print_linnk_list(head);
            print_linnk_list_reverse(tail);
    }
    else if(op == 3)
    {
        int pos;
        cin>>pos;
        if(pos>=size(head))
        {
            cout<<"INVALID POS";
        }
        else if(pos==0)
        {
            delet_head(head);
            print_linnk_list(head);
            print_linnk_list_reverse(tail);
        }
        else if(pos+1==size(head))
        {
            delet_tail(tail);
            print_linnk_list(head);
            print_linnk_list_reverse(tail);
        }
        else{
            delet_pos(head,tail,pos);
             print_linnk_list(head);
            print_linnk_list_reverse(tail);                   
        }

 

    }
    else if(op==4)
    {
        break;
    }

    }
   

    return 0;
}
