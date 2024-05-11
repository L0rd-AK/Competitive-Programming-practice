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
   int a=n/10;
   int b=n%10;
   if(a==0 or b==0){
    cout<<"YES\n";return 0;
   }
   if(a%b==0 or b%a==0)cout<<"YES\n";
   else cout<<"NO\n";
   return 0;
}