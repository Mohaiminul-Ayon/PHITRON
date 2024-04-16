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

void insert_in_pos(node*&head,int pos,int val)
{
    node * newnode = new node(val);

    if(pos==0)
    {
        newnode->next=head;
        head=newnode;
        return;
    }
    node * tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
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

int main() 
{
    node * head =NULL;
    node * tail = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
    }

    int q;
    cin>>q;
    while(q--)
    {
        int pos,val;
        cin>>pos>>val;

  
        if(pos>size(head))
        {
            cout<<"INVALID"<<endl;
        }
        else if(pos==size(head))
        {
            insert(head,tail,val);
            print_linnk_list(head);
        }
        else 
        {
            insert_in_pos(head,pos,val);
            print_linnk_list(head);
        }
        
    }
    

    return 0;
}
