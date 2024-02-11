#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)
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
      vector<pair<int,int>> v;
      f(i,0,n){
         v.push_back(make_pair(a[i],b[i]));
      }
      sort(v.begin(), v.end());
       f(i,0,n){
         cout<<v[i].first<<" ";
      }cout<<'\n';
       f(i,0,n){
         cout<<v[i].second<<" ";
      }cout<<'\n';

      
   }
   return 0;
}