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
   cin >> t;
   while (t--)
   {
      int a[3];
      cin>>a[0]>>a[1]>>a[2];
      sort(a,a+3);
      if(a[1]!=a[2])cout<<"NO\n";
      else cout<<"YES\n"<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;

   }

   return 0;
}