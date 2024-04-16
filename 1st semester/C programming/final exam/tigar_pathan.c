#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
    int x;
    scanf("%d",&x);

    char s[100];
    scanf("%s",s);
    int cnt1=0,cnt2=0;
    

    for(int i=0;i<x;i++)
    {
        if(s[i]=='T')
        {
            cnt1+=1;
        }
        else if(s[i]=='P')
        {
            cnt2+=1;
        }
    }

    if (cnt1 < cnt2)
    {
        printf("Pathaan");
    }
    else if (cnt1 > cnt2)
    {
        printf("Tiger");
    }
    else if (cnt1 == cnt2)
    {
        printf("Draw");
    }
    printf("\n");

    }
    
    return 0;
}
