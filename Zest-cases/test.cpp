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

   int a,b;
   char c;
   cin>>a>>c>>b;
   if(a>b and c=='>')cout<<"Right\n";
   else if(a<b and c=='<')cout<<"Right\n";
   else if(a==b and c=='=')cout<<"Right\n";
   else cout<<"Wrong\n";
   return 0;
}