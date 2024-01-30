#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
      for(int i=0;i<n;i++)cin>>a[i];
      for(int i=0;i<n;i++)cin>>b[i];
      vector< pair <int,int> > v;
      for(int i=0;i<n;i++){
         v.push_back(make_pair(b[i],a[i]));
      }
      sort(v.begin(),v.end());
      for(int i=0;i<n;i++){
         cout<<v[i].second<<" ";
      }cout<<'\n';
      for(int i=0;i<n;i++){
         cout<<v[i].first<<" ";
      }cout<<'\n';

   }
   

    
	return 0;
}