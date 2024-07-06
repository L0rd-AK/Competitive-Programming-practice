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
   // int t;
   // cin>>t;
   // while(t--){
      ll s,n;
      cin>>s>>n;
      vector<pair<int,int>> v(n,{0,0});
      f(i,0,n)cin>>v[i].first>>v[i].second;
      bool flg=1;
      sort(v.begin(),v.end());
      f(i,0,n){
         if(s>v[i].first)s+=v[i].second;
         else{
            cout<<"NO"<<endl;
            flg=0;
            break;
         }
      }
      if(flg)cout<<"YES"<<endl;
      

   // }

    return 0;
}