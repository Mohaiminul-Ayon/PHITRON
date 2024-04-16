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
int main() 
{
    node * head1=NULL;
    node *tail1 =NULL;

    node *head2 =NULL;
    node *tail2 =NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert(head1,tail1,val);
    }
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert(head2,tail2,val);
    }
    int x = size(head1);
    int y = size(head2);

    if(x==y) cout<<"yes";
    else cout<<"no";
    

    return 0;
}
