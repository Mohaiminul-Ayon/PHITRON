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
        int cnt1=0,cnt2=0,cnt3=0;
        char s[10001];
        scanf("%s",s);

        for(int j=0;j<strlen(s);j++)
        {
            if(s[j]<='Z'&&s[j]>='A')
            {
                cnt1++;
            }
            else if(s[j]<='z'&&s[j]>='a')
            {
                cnt2++;
            }
            else if(s[j]<='9' && s[j]>='0')
            {
                cnt3++;
            }
        }

            printf("%d %d %d\n",cnt1,cnt2,cnt3);


    }

    return 0;
}
