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
      vector<pair<int,int>> v(n);
      f(i,0,n){
          cin>>v[i].first;
          v[i].second=i;
      }
      int x=-69,idx=0;
      f(i,0,n){
         if(x<=v[i].first){
            x=v[i].first;
            idx=i;
         }
      }
      if(n-1==idx){
         sort(v.begin(),v.end());
         cout<<v[n-1].first+v[n-2].first<<endl;
      }else{
         cout<<v[n-1].first+v[idx].first<<endl;
      }
       


    }

    return 0;
}