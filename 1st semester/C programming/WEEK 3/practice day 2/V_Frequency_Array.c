#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n,m;
    scanf("%d %d",&n,&m);

    int a[100001];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt[100001]={0};

    for(int i=0;i<n;i++)
    {
        int val=a[i];
        cnt[val]++;
    }
    for(int i=0;i<=m;i++)
    {
        printf("%d\n",cnt[i]);
    }

    return 0;
}
