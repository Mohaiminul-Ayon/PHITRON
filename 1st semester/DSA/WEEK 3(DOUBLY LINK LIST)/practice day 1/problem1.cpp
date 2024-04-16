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
    node * head1 = NULL;
    node * tail = NULL;
    node * tail1 = NULL;
    
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        insert(head,tail,val);
    }
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        insert(head1,tail1,val);
    }
    bool flag = true;
    node * tmp1=head;
    node * tmp2=head1;
    if(size(head)!=size(head1))
    {
        cout<<"NO";
    }
    else{
        while(tmp1!=NULL)
        {
            if(tmp1->val!=tmp2->val)
            {
                flag = false;
                
            }
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        if(flag == true) cout<<"YES";
        else cout<<"NO";
    }
    // print_linnk_list(head);
    // print_linnk_list(head1);
    return 0;
}
