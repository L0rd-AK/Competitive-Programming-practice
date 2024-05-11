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
   int a[n],v;
   f(i,0,n)cin>>a[i];
   cin>>v;
   int idx=-1;
   f(i,0,n){
    if(a[i]==v){
        idx=i;
        break;
    }
   }
   cout<<idx<<endl;
   return 0;
}