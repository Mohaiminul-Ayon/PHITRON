#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long long int a,b,c,d;
    long long int x,y;

    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    y = a*b;
    x = b*c;
    
    

    if( a+x == d || a-x == d)
        printf("YES");

    else if( y+c == d || y-c == d)
        printf("YES");

    else if (a+b-c == d || a-b+c ==d)
        printf("YES");




    else
        printf("NO");

    
    
    return 0;
}
