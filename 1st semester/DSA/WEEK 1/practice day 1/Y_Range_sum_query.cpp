// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// #include <limits.h>
// #include<bits/stdc++.h>

// using namespace std;

// int main() 
// {
//     int n;
//     int q;
//     cin>>n>>q;

//     vector<int>v(n);

//     for (int i = 0; i < v.size(); i++)
//     {
//         cin>>v[i];
//     }

//     //int l[q],r[q];
//     // for (int i = 0; i < q; i++)
//     // {
//     //     cin>>l[i]>>r[i];
//     // }

//      int sum=0;

//      //query

//     for (int i = 0; i < q; i++)
//     {
//         int l,r;

//         cin>>l>>r;
        

//         /* code */
//         for (int j = l-1; j < r; j++)
//         {
//             /* code */
//            sum += v[j];
           
//         }
//         cout<<sum<<endl;
//         sum=0;
//     }
    
    

    

//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{

    long long int n,q;
    cin>>n>>q;
    long long int a[n];
    long long int pre[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            pre[i]=a[i];
        }
        else{
                pre[i] = a[i]+pre[i-1];

        }
       
    }
    while (q--)
    {
        /* code */
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        long long int sum=0;
        if(l==0)
        {
            sum=pre[r];
        }
        else{
            sum=pre[r]-pre[l-1];
        }
        cout<<sum<<endl;
    }
    


    return 0;
}














