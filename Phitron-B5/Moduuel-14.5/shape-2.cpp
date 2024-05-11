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
   int s=n-1,k=1;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++)cout<<" ";
        for(int j=1;j<=k;j++)cout<<"*";
        cout<<endl;
        s--;k+=2;
   }


   return 0;
}