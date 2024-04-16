#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
class freq
{
    public:
        char value;
        int cnt;
};
bool cmp(freq a,freq b)
{
    if(a.cnt == b .cnt)
    {
        return a.value<b.value;
    }
    else
    return a.cnt>b.cnt;
}
int main() 
{
    string s;
    cin>>s;
    freq f[26];
    for(int i=0;i<26;i++)
    {
        f[i].value=char(i+'a');//typecating
        f[i].cnt = 0;
    }
    for(char c:s)
    {
        int askii = int(c - 'a');
        f[askii].cnt++;
    }
    sort(f,f+26,cmp);
    for(int i=0;i<26;i++)
    {
        if(f[i].cnt!=0)
        cout<<f[i].value<<" - "<<f[i].cnt<<endl;
    }


    

    return 0;
}
