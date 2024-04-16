#include<stdio.h>
int main()
{
   long long int i,n;
   scanf("%lld",&n);
   for(i=1;i<=n;i++)
   {
    if(i%5 == 0)
    {
        printf("%lld Yes\n",i);
    }
       
    
    else
    {
        printf("%lld No\n",i);
    }
   }

    return 0;

}