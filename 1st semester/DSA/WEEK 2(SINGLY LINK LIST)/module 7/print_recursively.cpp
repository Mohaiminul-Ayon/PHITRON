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
void print_recursively(node * n)
{
    if(n== NULL)
    return;

        cout<<n->val<<" ";
    print_recursively(n->next);

}
void print_reverse(node * n)
{
    if(n== NULL)
    return;

    print_reverse(n->next);
    cout<<n->val<<" ";


}


int main() 
{
    node * head= new node(10);
    node * a= new node(20);
    node * b= new node(30);
    node * c= new node(40);
    node * d= new node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    print_recursively(head);
    cout<<endl;
    print_reverse(head);

    return 0;
}
