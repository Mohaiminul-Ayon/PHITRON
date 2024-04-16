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
  node* head =NULL;
  node * tail = NULL;  

    while(true)
    {
        int val;
        cin>>val;
        if(val == -1) break;

        insert(head,tail,val);
    }
    for(node* i=head;i->next!=NULL;i=i->next)
    {
        for (node * j = i->next; j!= NULL; j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
                // cout<<i->val<<" "<<j->val<<endl;
            }

        }
        // cout<<endl;
    }
print(head);
    return 0;
}
