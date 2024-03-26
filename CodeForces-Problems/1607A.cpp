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
      string s1,s2;
      cin>>s1>>s2;
      int ans=0,idx=0,jdx=0;
      f(i,0,s2.length()-1){
         f(j,0,s1.length()){
            if(s2[i]==s1[j])idx=j+1;
            if(s2[i+1]==s1[j])jdx=j+1;
         }
         // cout<<idx<<" "<<jdx<<endl;
         ans+=abs(idx-jdx);
      }
      cout<<ans<<endl;
   }


   return 0;
}