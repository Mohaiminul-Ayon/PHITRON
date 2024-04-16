#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
class NODE{
    public:
    int val;
    NODE* next;  
    NODE(int val)
    {
        this->val=val;
        this->next = NULL;
    }
};
int main() 
{
    NODE a,b;
    a.val=10;
    b.val=20;

    a.next=&b;
    b.next=NULL;

    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
    

    return 0;
}