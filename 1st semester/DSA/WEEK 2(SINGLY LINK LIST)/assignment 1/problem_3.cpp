//searching
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
   int q;
   cin>>q;
   while(q--)
   {
        node * head=NULL;
        node * tail=NULL;
        while(true)
        {
            int val;
            cin>>val;
            if(val == -1) break;
            insert(head,tail,val);
        }
        int x;
        cin>>x;
 
        long long int cnt=0;
    node * i =head;
        for(i;i!=NULL;i=i->next)
        {
            
            // if(i->val!=x)
            // {
            //     cnt++;
            // }
            // else break;
            cnt++;
            if(i->val==x) break;
        }
        if(i==NULL)
        {
            cout<<"-1"<<endl;
        }
        else cout<<cnt-1<<endl;

   }
   return 0;
}
