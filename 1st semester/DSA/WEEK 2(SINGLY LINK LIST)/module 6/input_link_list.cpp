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
void insert_at_tail(node *&head ,int val)
{


    node * newnode =new node(val);
    
    if(head==NULL)
    {
        head=newnode;
        return;
    }

    node *tmp = head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
// void print_linnk_list(node * head)
// {
//     cout<<endl<<endl<<"your link list :  ";
//     node * tmp = head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp = tmp->next;
//     }
//     cout<<endl<<endl;
// }

void print_linklist(node  * head)
{
    cout<<"eta nao : ";
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
    node *head = NULL;


       
        while(true)
        {
            int val;
            cin>>val;
            if(val==-1) break;
              insert_at_tail(head,val);
        }
      
    

         print_linklist(head);

    

    return 0;
}
