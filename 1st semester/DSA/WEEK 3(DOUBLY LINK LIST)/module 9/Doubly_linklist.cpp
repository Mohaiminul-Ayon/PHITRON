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
    node* previ;  
    node(int val)
    {
        this->val=val;
        this->next = NULL;
        this->previ= NULL;
    }
};
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
    cout<<"your link list reverse:  ";
    node * tmp = tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->previ;
    }
    cout<<endl;
}


int main() 
{
    node* head =new node(10);
    node* a =new node(20);
    node* b =new node(30);

    head->next=a;
    a->previ=head;

    a->next=b;
    b->previ=a;

    node * tail = b;
    print_linnk_list(head);
    print_linnk_list_reverse(tail);

    return 0;
}
