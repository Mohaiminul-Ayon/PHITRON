#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n;
     
    scanf("%d",&n);
    

    for(int i=0;i<n;i++)
    {
        char s[101];
        scanf("%s",s);
        int st=strlen(s);

        if(st<=10)
        {
            printf("%s\n",s);
        }
        else if(st>10)
        {
            printf("%c%d%c\n",s[0],(st=st-2),s[st-1]);
        }
    }
    

    return 0;
}
