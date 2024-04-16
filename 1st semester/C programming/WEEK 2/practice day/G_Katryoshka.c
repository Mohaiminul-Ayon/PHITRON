#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long long int m,n,k;

    int temp = 0,i,j,l,count1=0; 

    scanf("%lld %lld %lld",&m,&n,&k);

    if (m == 0 || k == 0)
    printf("0");

    for(i=m;i>=0;i--)
    {
        for(j=k;j>=0;j--)
        {
             for(l=m;l>=0;l--)
            {
                count1++;
            }
        }
           
    }
        


    printf("%d",count1);

    //printf("%d",count1);
    
    return 0;
}
