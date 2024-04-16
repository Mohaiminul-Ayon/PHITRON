#include<iostream>
#include<stdio.h>
#include<utility>//swap() use korte lage
#include<iomanip>//setpricision use korar jonno lage
#include<algorithm>//min max use korar jonno lage

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mn = min({a,b,c,d});
    int mx = max({a,b,c,d});
    cout<<mn<<" "<<mx<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl; 
    return 0;
}