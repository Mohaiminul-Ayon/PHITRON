#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int x,sec_dig,first_dig;
    scanf("%d",&x);


     sec_dig = x%10 ;
     first_dig = x/10;

     if(sec_dig == 0)
     printf("YES");

     else{

       if (first_dig % sec_dig == 0 || sec_dig % first_dig == 0)
     printf("YES");

     else
     printf("NO");  
     }

  
    
    return 0;
}
