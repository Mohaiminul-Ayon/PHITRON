#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    char s[1001];
    scanf("%s",s);
    int st = strlen(s),flag=1;
   

    int i=0;
    int j=st-1;

    while(i<j)

    {
        if(s[i] != s[j])
        {
            flag=0;
            break;
        }
        
        i++;
        j--;
       
    }
    if(flag==1)
    {
           printf("YES");
    }
 

    else if(flag==0)
    {
            printf("NO");
    }



    return 0;
}
