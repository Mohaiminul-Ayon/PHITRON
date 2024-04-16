#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    char s[10001];
    scanf("%s",s);

    int cnt[100]={0};
    for(int i=0;i<strlen(s);i++)
    {
        int val = s[i]-'a';
        cnt[val]++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]!=0)
        {
            printf("%c - %d\n",i+'a',cnt[i]);
        }
    }

    return 0;
}
