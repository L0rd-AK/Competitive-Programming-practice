#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)

int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif
      
      int t;
      cin>>t;
      while(t--){
         int n;
         cin>>n;
         string s;
         cin>>s;
         int a[26]={0},ballons=0;
         f(i,0,n){
            if(a[s[i]-'A']>0){
               a[s[i]-'A']++;
               ballons++;
            }
            else if(a[s[i]-'A']==0) {a[s[i]-'A']++;ballons+=2;}
         }
         cout<<ballons<<'\n';
      }
   
   return 0;
}