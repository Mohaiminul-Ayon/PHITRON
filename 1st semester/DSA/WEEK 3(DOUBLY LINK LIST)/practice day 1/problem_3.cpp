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
    node* pre;  
    node(int val)
    {
        this->val=val;
        this->next = NULL;
        this->pre = NULL;
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
    newnode->pre=tail;
    tail=newnode;
}
void print_linnk_list(node * head)
{
    // cout<<endl<<"your link list :  ";
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
    node * head = NULL;
    node * tail = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        insert(head,tail,val);
    }
    node * i=head;
    node * j=tail;
    bool flag = true;
    while(i!=j && i->next!=j)
    {
        // swap(i->val,j->val);
        if(i->val!=j->val) flag=false;
        i=i->next;
        j=j->pre;
    }
    if(i->val!=j->val) flag=false;
    // swap(i->val,j->val);
        if(flag == true) cout<<"YES";
        else cout<<"NO";
    // print_linnk_list(head);
    return 0;
}