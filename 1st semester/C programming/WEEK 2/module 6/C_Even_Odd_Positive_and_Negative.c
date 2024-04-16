#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int even=0,odd=0,pos=0,neg=0;

    int i,n,a;

    scanf("%d",&n);
     

    
    for(i=1;i<=n;i++)
    {
      
        scanf("%d",&a);

        if(a%2==0)
        {
            even++;
           
        }
        else if(a%2 != 0)
        {
            odd++;
            
            
        }
        if (a>0)
        {
            pos++;
            
            
        }
        else if (a<0)
        {
            neg++;
            
            
        }
        
     }
     
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);

    return 0;
}
