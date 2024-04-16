#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for ( i=100;i>=n;i=i-50)
    {
     printf("%d\n",i);
       
    }
    return 0;
}