#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
bool test[100000 + 7] = {0};
int N,ans=0;
int check(int j){
      for (int i = 2; i * i <= j; ++i)
      {
         if (j % i == 0)
         {
            N=i;
            while (N != 0)
            {
               int temp = N % 10;
               if (temp == 0 or temp == 1)
                  N /= 10;
               else return 0;
            }
            
            if (i != j / i){
               int x=check(j/i);
               if(x) return 1;
               else return 0;
            }
         }
      }
      return 1;
}
int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

   f(j, 1, 100000 + 5)
   {
      if(check(j))test[j]=true;
   }

   int t;
   cin>>t;

   while (t--)
   {  
      int n;
      cin >> n;
      if(n==1){cout<<"YES\n";continue;}
      if(test[n])cout<<"YES\n";
      else cout<<"NO\n";
   }

   return 0;
}