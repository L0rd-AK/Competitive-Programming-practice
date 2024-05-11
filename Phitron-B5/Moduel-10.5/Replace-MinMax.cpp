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

   int n;
   cin>>n;
   int a[n];
   f(i,0,n)cin>>a[i];
   int mn=a[0],mx=a[0],mn_idx=0,mx_idx=0;
   f(i,1,n){
      if(a[i]<mn){
        mn=a[i];
        mn_idx=i;
      }
      if(a[i]>mx){
        mx=a[i];
        mx_idx=i;
      }
   }
   swap(a[mn_idx],a[mx_idx]);
   f(i,0,n)cout<<a[i]<<" ";


   return 0;
}