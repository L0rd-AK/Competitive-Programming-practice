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
   int t;cin>>t;
    while(t--){
      int n;
      cin>>n;
      int mx=0,x=-1;
      for(int i=2; i<=n; ++i)
      {
         int sum=0;
         for(int j=1; j*i<=n; ++j) sum+=j*i;
         if(sum>mx)
         {
               mx=sum;
               x=i;
         }
      }
      cout<<x<<endl;
    }

    return 0;
}