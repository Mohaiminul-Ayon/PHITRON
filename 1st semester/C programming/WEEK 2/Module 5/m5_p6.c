#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
     int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b && a>=c)
            {
                if(b>=c)
                printf("%d %d",c,a);

                else if(c>=b)
                printf("%d %d",b,a);
            }
    
    else if(b>=a && b>=c)
            {
                if(a>=c)
                printf("%d %d",c,b);

                else if(c>=a)
                printf("%d %d",a,b);
            }            

    
    else if(c>=a && c>=b)
            {
                if(a>=b)
                printf("%d %d",b,c);

                else if(b>=a)
                printf("%d %d",a,c);
            }

        


    return 0;
}
