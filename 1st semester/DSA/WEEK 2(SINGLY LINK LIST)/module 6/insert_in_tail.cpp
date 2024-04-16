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
void insert_value(node *&head , int val)
{
    node *newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
    return;
    }

    node*tmp = head;

        while(tmp->next!=NULL)
        {
            tmp = tmp->next;
        }
        tmp->next=newnode;

    
}
void print_linnk_list(node * head)
{
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
    node* head = NULL;
    while(true)
    {
    cout<<"option 1 : insert value in tail "<<endl;
    cout<<"option 2 : show the link list"<<endl;
    cout<<"option 3 : terminate"<<endl;
    int op;
    cin>>op;
    if(op == 1)
    {
        cout<<"please enter the value : ";
        int val;
        cin>>val;
        insert_value(head,val);
    }
   
    else if (op == 2)
    {
        print_linnk_list(head);
    }
    else if (op == 3)
    {
        break;
    }
    }

    

    return 0;
}
