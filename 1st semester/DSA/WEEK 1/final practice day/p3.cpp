// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// #include <limits.h>
// #include<bits/stdc++.h>

// using namespace std;

// int main() 
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//             int n;
//     cin>>n;
//     vector<int>v(n);
//     for (int i = 0; i < n; i++)
//     {
       
//         cin>>v[i];
//     }
//     bool flag = true;

//     for (int  i = 1; i < v.size(); i++)
//     {
    
//         if(v[i-1]>v[i]){   // changed
//             flag =false;
//             break;
//         }
//     }
//     if(flag == true)
//     cout<<"YES"<<endl;

//     else cout<<"NO"<<endl; 

//     }


//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int freq[n] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (freq[i] > 1)
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}