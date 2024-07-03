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
      vector<ll> v(n,0);
      f(i,0,n) cin>>v[i];
      if(n==2){
         if(v[0]<v[1])cout<<v[0]<<"\n";
         else cout<<v[1]<<"\n";
      }else{
         int mx=INT_MIN,x=0;
         vector<int> vt;
         f(i,0,n-2){
            vt.push_back(v[i]);
            vt.push_back(v[i+1]);
            vt.push_back(v[i+2]);
            sort(vt.begin(),vt.end());
            mx=max(mx,vt[1]);
            // for(auto i:vt)cout<<i<<" ";
            // cout<<mx<<endl;
            vt.clear();
         }
         cout<<mx<<endl;
      }

   }

    return 0;
}