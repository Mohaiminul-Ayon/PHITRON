#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int temp=0,i,n,a;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>temp)
        temp=a;
    }
    printf("%d",temp);

    return 0;
}
