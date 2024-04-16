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
int main() 
{
    node * head1 =NULL;
    node * head2 =NULL;
    node * tail1 =NULL;
    node * tail2 =NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val == -1) break;
        insert(head1,tail1,val);
    }
    while(true)
    {
        int val;
        cin>>val;
        if(val == -1) break;
        insert(head2,tail2,val);
    }


    // for(node * i=head1;i!=NULL;i=i->next)
    // {

    // }|
    if(size(head1)!=size(head2))
    {
        cout<<"NO";
    }
    else
    {
        bool flag = true;

        node * tmp1 = head1;
        node * tmp2 = head2;
    for(int i=1;i<=size(head1);i++)
    {
        if(tmp1->val!=tmp2->val)
        {
            flag=false;
            break;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    if(flag==true)
    {
        cout<<"YES";
    }
    else cout<<"NO";

    }


    return 0;
}
