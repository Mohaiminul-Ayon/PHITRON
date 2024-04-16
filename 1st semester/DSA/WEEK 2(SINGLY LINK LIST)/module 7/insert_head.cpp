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
    // node * tmp = head;
    // while(tmp->next!=NULL)
    // {
    //     tmp=tmp->next;

    // }
    tail->next=newnode;
    tail=newnode;
}
void insert_in_pos(node *&head, int pos ,int val)
{
        node * newnode = new node(val);

         if(pos==0)
        {
            newnode->next=head;
            head=newnode;
            return;
        }
        node*tmp=head;

    for(int i=1;i<=pos-1;i++)
    {
        tmp =tmp->next;
        if(tmp==NULL)
        {
            cout<<"invalid index"<<endl;
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next=newnode;

}
void insert_in_head(node *&head,int val)
{
    node * newnode = new node(val);
        newnode->next=head;
        head=newnode;

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
void delet(node *&head , int pos)
{
    node * deletnode;
    node * tmp = head;
    if(pos==0)
    {
        deletnode=head;
        head=head->next;
        return;

    }
    for (int i = 1; i <=pos-1; i++)
    {
        tmp=tmp->next;
    }
    deletnode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletnode;
    
}
void print(node * head)
{
    cout<<"link list : ";
    node *tmp= head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
int main() 
{
    node * head = NULL;
    node * tail = NULL;
    while(true)
    {
            cout<<"op  = 1 : insert tail"<<endl;
            cout<<"op  = 2 : print"<<endl;
            cout<<"op  = 3 : insert pos"<<endl;
            cout<<"op  = 4 : insert head"<<endl;
            cout<<"op  = 5 : size of link list "<<endl;
            cout<<"op  = 6 : delet pos "<<endl;
            cout<<"op  = 7 : terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {

            cout<<"input value : ";
            int val;
            cin>>val;
            // cout<<"input position : ";
            // int pos;
            // cin>>pos;
            insert(head,tail,val);
        }
        else if(op == 2)
        {
            print(head);
        }
        else if(op==3)
        {
            int val;
            cout<<"input value : ";
            cin>>val;
            cout<<"position : ";
            int pos;
            cin >> pos;
            insert_in_pos(head,pos,val);
        }
        else if(op == 4)
        {
            cout<<"input value : ";
            int val;
            cin>>val;
            insert_in_head(head,val);
        }
        else if(op == 5)
        {
            cout<<size(head)<<endl<<endl;
        }
        else if(op==6)
        {
            int pos;
            cout<<"delet index : ";
            cin>>pos;
            delet(head,pos);
        }
        else if(op==7)
        {
            break;
        }
    }
    

    return 0;
}
