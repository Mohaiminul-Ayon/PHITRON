#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int test;

    scanf("%d",&test);

    for(int j=0;j<test;j++)
    {

        int N,a ,b, c,flag=0;

        scanf("%d %d %d %d",&N,&a,&b,&c);

        int mul=a*b*c;

        if(N % mul!=0)
        {
            flag=-1;
        }
        else{
            flag=N/mul;
        }
        
        
        // for(int i=0;i<=N;i++)
        // {
        //     if(i*mul==N)
        //     {
        //         flag=i;
        //         break;
        //     }
        //     else{
        //         flag=-1;
        //     }
        // }

        printf("%d\n",flag);

    }
    
    return 0;
}
