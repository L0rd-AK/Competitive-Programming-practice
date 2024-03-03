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
      
      int t;cin>>t;
      while(t--){
         int a,b;
         cin>>a>>b;
         if(a<b){
            if(abs(a-b)%2==1)cout<<"1\n";
            else cout<<"2\n";
         }else if(b<a){
            if(abs(a-b)%2==1)cout<<"2\n";
            else cout<<"1\n";
         }else cout<<"0\n";
      }
   return 0;
}