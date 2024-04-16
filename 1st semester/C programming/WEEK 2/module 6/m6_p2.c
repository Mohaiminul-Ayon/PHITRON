#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int c1=0,c2=0,c3=0,c4=0;
    int i,n,p;
    scanf("%d",&n);
     

    
    for(i=1;i<=n;i++)
    {
      
        scanf("%d",&p);

        if(p%2==0)
        {
            c1++;
           
        }
        if(p%2 != 0)
        {
            c2++;
           
        }
        if(p>0)
        {
            c3++;
            
        }
        if(p<0)
        {
            c4++;
          
        }
        
       

    }
    printf("Even: %d\n",c1);
    printf("Odd: %d\n",c2);
    printf("Positive: %d\n",c3);
    printf("Negative: %d\n",c4);

    return 0;
}
