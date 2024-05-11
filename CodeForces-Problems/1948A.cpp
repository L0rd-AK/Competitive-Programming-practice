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
   cin>>t;

   while (t--)
   {  
      int n,c=0;
      cin >> n;
      bool flag=1;
      if(n%2==1){cout<<"NO\n";continue;}
      else cout<<"YES\n";

      for(int i=0;i<n;i++){
         if(c==2){
            if(flag)flag=0;
            else flag=1;
            c=0;
         }
         if(flag){
            cout<<"A";
         }else{
            cout<<"B";
         }
         c++;
      }cout<<endl;
   }

   return 0;
}