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
   
   f(i,0,n){
    if(a[i]>0)a[i]=1;
    else if(a[i]<0)a[i]=2;
   }
   f(i,0,n)cout<<a[i]<<" ";

   return 0;
}