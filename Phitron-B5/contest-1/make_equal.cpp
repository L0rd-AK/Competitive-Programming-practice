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
      int n,k;
      cin>>n>>k;

      int arr[10000+7]={0};
      int x;
      f(i,0,n){
        cin>>x;
        arr[x]++;
      }
      int mx=arr[0];
      f(i,1,10002){
        if(arr[i]>mx)mx=arr[i];
      }
        // cout<<mx<<endl;
      if(k>=n-mx)cout<<"YES\n";
      else cout<<"NO\n";
      
   }

   return 0;
}