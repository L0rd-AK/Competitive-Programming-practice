#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"

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
      ll a[n],b[n];
      f(i,0,n)cin>>a[i];
      f(i,0,n)cin>>b[i];
      int m;cin>>m;
      vector<ll> d(m,0),v;
      f(i,0,m)cin>>d[i];
      bool ok=1;
      f(i,0,n){
         if(d[m-1]==b[i]){ok=0;break;}
      }
      if(ok){
         cout<<"NO"<<endl;
         continue;
      }
      sort(d.begin(),d.end());
      f(i,0,n){
         if(a[i]!=b[i])v.push_back(b[i]);
      }
      sort(v.begin(),v.end());
      bool flg=1;

      int ans=0;
      for(int i=0,j=0;i<v.size() && j<m;){
         if(v[i]==d[j]){i++;j++;ans++;}
         else j++;
         if(ans==v.size())break;
      }
      // f(i,0,m)cout<<d[i]<<" ";cout<<endl;
      // f(i,0,v.size())cout<<v[i]<<" ";cout<<endl;
      if(ans==v.size())cout<<"YES"<<endl;
      else cout<<"NO"<<endl;


   }

    return 0;
}