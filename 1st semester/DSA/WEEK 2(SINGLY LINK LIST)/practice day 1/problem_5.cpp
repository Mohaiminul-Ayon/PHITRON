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
    cout<<endl<<endl<<"your link list :  ";
    node * tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}

int main() 
{
    node * head =NULL;
    node * tail =NULL;
    cout<<"insert value in link list : ";
    while(true)
    {
        int val;
        cin>>val;
        if (val == -1 )
        {
            break;
        }
        insert(head,tail,val);
    }
    bool flag = false;
    for(node* i = head;i->next!=NULL;i=i->next)
    {
        for(node * j = i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                flag= true;
                break;
            }

        }
        if(flag==true) break;
    }
    if(flag==true)
    {
        cout<<"NO";
    }
    else cout<<"YES";

    return 0;
}
