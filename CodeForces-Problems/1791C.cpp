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
         int n;cin>>n;
         string s;cin>>s;
         int size=s.length();
         bool flag=true;
         f(i,0,(size/2)+1){
            if(s[i]==s[size-1-i]){
               flag=0;
               cout<<(size-i+1)-(i+1)<<endl;
               break;
            }
            else continue;
         }
         
         if(flag and size%2==1)cout<<"1\n";
         else if(flag and size%2==0)cout<<"0\n";
      }
   return 0;
}