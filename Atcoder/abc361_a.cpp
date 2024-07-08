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
   int n,idx,val;
   cin>>n>>idx>>val;
   int a[n];
   f(i,0,n)cin>>a[i];
   f(i,0,n){
    cout<<a[i]<<" ";
    if(idx==i+1)cout<<val<<" ";
   }


   return 0;
}
