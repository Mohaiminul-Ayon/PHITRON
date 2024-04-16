#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int i;
    for(i=1;i<=n;i++)
    {
        if(i%3 == 0 && i%7 == 0)
        printf("%lld\n",i);
    }
    return 0;
}