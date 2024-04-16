#include<bits/stdc++.h>

using namespace std;

int main() 
{
    char c;
    cin>>c;

    //cout<<int(c)<<endl;
   

    if(c>='0' && c<='9')
    {
        cout<<"IS DIGIT"<<endl;
        //cout<<"IS SMALL"<<endl;
    }
    else if(c<='Z' && c>='A')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(c<='z' && c>='a')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }

    return 0;
}
