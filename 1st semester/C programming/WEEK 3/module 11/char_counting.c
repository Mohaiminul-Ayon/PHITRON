#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    char s[1000];
    scanf("%s",s);

    int cnt[26]={0};

    for(int i=0;i<strlen(s);i++)
    {
        int value = s[i]-'a';
        cnt[value]++;
    }

    for(int i=0;i<26;i++)
    {
        if(cnt[i]!=0)
        {

         printf("%c - %d\n",i+'a',cnt[i]);
        }
    
    
    }
      /*for(int i=0;i<strlen(s);i++)
    {
        int value = s[i]-97;
        //printf("%d ",value);
        if(cnt[value]!=0)
        {

         printf("%c - %d\n",value+'a',cnt[value]);
        }
        cnt[value]=0;
    
    
    }*/


    return 0;
}
