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
   while(t--){
      int n,q;
      cin>>n>>q;
      string s;
      cin>>s;
      while(q--){
      int odd=0;
        int a[26]={0},l,r;
        cin>>l>>r;
        for(int i=l-1;i<r;i++){
            a['a'-s[i]]++;
        }
        for(int i=0;i<26;i++){
            if(a[i]%2==1)odd++;
        }
        cout<<odd<<"\n";

      }

      

      for(int i=0;i<n;i++){
        
      }
      
   }

   return 0;
}