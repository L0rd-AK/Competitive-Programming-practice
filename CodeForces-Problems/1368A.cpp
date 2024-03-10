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
      int a, b, n;
      cin >> a >> b >> n;
      ll x = (a + b), ans = 1;
      if(a<b){
         while(x<=n){
            a=b;
            b=x;
            x=(a+b);
            ans++;
         }
      }else{
         while(x<=n){
            b=a;
            a=x;
            x=(a+b);
            ans++;
         }
      }
      cout << ans << endl;
   }

   return 0;
}