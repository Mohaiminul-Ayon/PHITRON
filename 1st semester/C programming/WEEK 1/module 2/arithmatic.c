#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    int m = b%a;
    printf("%d",m);


    return 0;
}