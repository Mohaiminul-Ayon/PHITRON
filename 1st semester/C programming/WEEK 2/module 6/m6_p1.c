#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int i,N;
    scanf("%d",&N);

    if(N <= 1)
        printf("-1\n");
    else
    {
    for(i=1;i<=N;i++)
        {
            if(i%2 == 0)
             {
                 printf("%d\n",i);
             }
     
        }

    }


    return 0;
}
