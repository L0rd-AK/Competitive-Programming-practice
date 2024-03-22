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

   string a,b;
   cin>>a;cin.ignore();
   getline(cin,b);
   // cout<<a<<" "<<b;
   if(a[0]==b[0] or a[1]==b[1] or a[0]==b[3] or a[1]==b[4] or a[0]==b[6] or a[1]==b[7] or a[0]==b[9] or a[1]==b[10] or a[0]==b[12] or a[1]==b[13])cout<<"YES\n";
   else cout<<"NO\n";


   return 0;
}