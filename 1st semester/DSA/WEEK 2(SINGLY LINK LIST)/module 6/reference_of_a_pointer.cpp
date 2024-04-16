#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
void fun(int *&p)
{
    p = NULL;
}
int main() 
{
    int val = 20;
    int a=12;
    int *ptr = &val;

    fun(ptr);

    cout<<ptr<<endl;

    return 0;
}
