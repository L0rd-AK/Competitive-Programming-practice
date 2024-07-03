#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int a[n],b[n];
      f(i,0,n)cin>>a[i];
      f(i,0,n)cin>>b[i];
      int mn=0,mx=0,ans=INT_MIN,ans_pro_max=INT_MAX;
      f(i,0,n){
        if(a[i]<b[i]){
           mx+=b[i];
        }
        else if(a[i]>b[i]){
            mx+=a[i];
        }
        else{ 
            if(a[i]==1)
                mn+=a[i];
            else if(a[i]==-1)
                mx+=a[i];
        }
      }
      
      cout<<min(mx,mn)<<endl;
    //   cout<<ans_pro_max<<endl;
      
   }

    return 0;
}