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
void insert(node *&head , node *&tail , int val)
{
    node * newnode = new node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next=newnode;
    tail=newnode;
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
        int val;
        cin>>val;
        if(val==-1) break;
        insert(head,tail,val);
    }
    print(head);

// etar complexity o(1)

    

    return 0;
}
