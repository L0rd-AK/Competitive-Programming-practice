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
      int n;cin>>n;
      ll s1=pow(2,n),s2=0;
      for(int i=1;i<n/2;i++) s1+=pow(2,i);
      for(int i=n/2;i<n;i++) s2+=pow(2,i);
      cout<<s1-s2<<endl;
   }

   return 0;
}