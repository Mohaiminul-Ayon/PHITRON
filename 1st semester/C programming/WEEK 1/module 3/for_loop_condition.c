#include<stdio.h>
int main()
{
    int sum=0;
    int i,n;
    scanf("%d",&n);
    for ( i=1;i<=n;i=i+1)
    {
        if (i%2 == 1)
        {
             printf("%d - i love you nahar\n",i);
        }
        if (i%2 == 0)
        {
             printf("%d  - i love you tasnim\n",i);
        }
        sum+=i;
       
    }
    printf("%d",sum);
    return 0;
}