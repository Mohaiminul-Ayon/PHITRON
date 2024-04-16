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
void insert_head(node*&head,node*&tail,int val)
{
    node* newnode =  new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}
void delet(node *&head,node*&tail, int pos)
{
    node* deletnode;
    if(head==NULL)
    {
        return;
    }
    else if(pos>=size(head))
    {
        return;
    }
    else if(pos==0)
    {
        deletnode=head;
        head=head->next;
        delete deletnode;
        return;
    }
    else if(pos+1==size(head))
    {
        
    }
    node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    deletnode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletnode;
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

int main() 
{
    node * head=NULL;
    node * tail=NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;

        if(x==0)
        {
            insert_head(head,tail,v);
        }
        else if(x==1)
        {
            insert(head,tail,v);
        }
        else if(x==2)
        {
            delet(head,tail,v);
        }

        print_linnk_list(head);
    }


    return 0;
}
