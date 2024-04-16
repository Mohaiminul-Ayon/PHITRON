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
void insert_in_pos(node * head,int pos ,int val)
{

    node *newnode = new node(val);
    node * tmp = head;
    for (int i = 1; i < pos-1; i++)
    {
        tmp = tmp->next;
        if (tmp==NULL)
        {
            cout<<"Invalid Index"<<endl<<endl;
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    
}
void insert_in_pos_zero(node *&head ,  int val )
{
    node * newnode = new node(val);
    newnode->next=head;
    head=newnode;
}
void delet_node_from_pos(node * head,int pos)
{
    node *tmp =head;
    for(int i=1;i<=pos-1;i++)
    {
        
        if (tmp==NULL)
        {
            cout<<"Invalid Index"<<endl<<endl;
            return;
        }
        tmp = tmp->next;
    }
        if (tmp->next==NULL)
        {
            cout<<"Invalid Index"<<endl<<endl;
            return;
        }
    node * deletnode =  tmp->next;
    tmp->next=tmp->next->next;
    delete deletnode;

    cout<<endl<<"delete done"<<endl<<endl;

}
void delet_node_from_pos_zero(node *&head)
{
        if (head==NULL)
        {
            cout<<"Invalid Index"<<endl<<endl;
            return;
        }
    node* deletnode = head;
    head=head->next;
    delete deletnode;
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
    node* head = NULL;
    while(true)
    {
    cout<<"option 1 : insert value in tail "<<endl;//done
    cout<<"option 2 : show the link list"<<endl;//done
    cout<<"option 3 : insert the value in position "<<endl;
    cout<<"option 4 : insert the value in position zero"<<endl;
    cout<<"option 5 : Delet the value from position"<<endl;
    cout<<"option 6 : terminate"<<endl;
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
    else if(op == 3)
    {
        int val;
        cout<<"insert value : ";
        cin>>val;

        int pos;
        cout<<"position : ";
        cin>>pos;
        if(pos==0)
        {
            insert_in_pos_zero(head, val);
        }
      else
        insert_in_pos(head,pos,val);

    }
    else if (op  == 4)
    {
         int val;
         cout<<"input value : ";
         cin>>val;
         insert_in_pos_zero(head,val);

    }
    else if(op == 5)
    {
        int pos;
        cout<<"insert delet node position : ";
        cin>>pos;
        if (pos==0)
        {
            delet_node_from_pos_zero(head);
        }
        else
        delet_node_from_pos(head,pos);

    }
    else if (op == 6)
    {
        break;
    }
    }

    

    return 0;
}
