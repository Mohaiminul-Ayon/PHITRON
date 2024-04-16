#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n;
    scanf("%d",&n);
    char s[1000];
    scanf("%s",s);

    
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
       int val = s[i]-48;
       sum+=val;
    }
   
    printf("%d",sum);

    
    return 0;
}
