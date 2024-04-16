//  #include <stdio.h>
//  #include <string.h>
//  #include <math.h>
//  #include <stdlib.h>
//  #include <limits.h>
//  #include<bits/stdc++.h>
 
//  using namespace std;
 
//  int main() 
//  {
//      int n;
//      cin>>n;
//      vector<string> v(n);
//      for(int i=0;i<n;i++)// eta array of string 
//                         // boltegele ekhane 5 tastring jar shob gula alada alada naam alada alada string ja vector array te protita index e rakhtesi
//      {
//         cin>>v[i];
//      }
//      for(string s:v)// ekhane protta naam alada alada string ,tai shob gula space diye alada kora ,ekhane space input neya hoy ni
//      {
//         cout<<s<<endl;
//      }
 
//      return 0;
//  }


// // spacee shoho vector array // //

// ekhane getline use korte hobe

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string> v(n);

    for(int i=0;i<n;i++)
    {
        getline(cin,v[i]);
    }
    for(string s:v)
    {
        cout<<s<<endl;
    }


    return 0;
}

 