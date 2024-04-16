#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
class node{
    public:
    string s;
    node* next;  
    node* pre;  
    node(string s)
    {
        this->s=s;
        this->next = NULL;
        this->pre = NULL;
    }
};
void insert(node*&head,node *&tail,string s)
{
    node * newnode = new node(s);
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
void print(node * head)
{
    // cout<<endl<<endl<<"your link list :  ";
    node * tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->s<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void find(node*head,node *& tmp,string s)
{
    node * tmp1 = head;
    while(tmp1!=NULL)
    {
        if(s==tmp1->s)
        {
            
            cout<<tmp1->s<<endl;
            tmp=tmp1;
            break;
        }
        else{
            tmp1=tmp1->next;
        }

    }
    if(tmp1==NULL) cout<<"Not Available"<<endl;
}
void pre(node *&tmp)
{
    if(tmp->pre==NULL) cout<<"Not Available"<<endl;
    else{
        cout<<tmp->pre->s<<endl;
        tmp=tmp->pre;
    }
}
void next(node *&tmp)
{
    if(tmp->next==NULL) cout<<"Not Available"<<endl;
    else{
        cout<<tmp->next->s<<endl;
        tmp=tmp->next;
    }
}


int main() 
{
    node * head =NULL;
    node * tail = NULL;
    node * tmp = head;

    while(true)
    {
        string s;
        cin>>s;
        if(s=="end") break;
        insert(head,tail,s);
    }    
    int q;
    cin>>q;
    while(q--)
    {
        string x;
        cin>>x;
        if(x=="visit")
        {
            string y;
            cin>>y;
            find(head,tmp,y);

        }
        else if(x=="prev")
        {
            pre(tmp);
        }
        else if(x=="next")
        {
            next(tmp);
        }


    }
    // print(head);

    return 0;
}