#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
void easha(int i,int n)
{

    if(i==n) return;
    
    printf("%d i love easha\n",i);
    easha(i+1,n);
}
int main() 
{
    int n;
    scanf("%d",&n);

    easha(1,n);

    return 0;
}
