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
         ll a[n]={0};
         f(i,0,n)cin>>a[i];
          
         ll ans=2;
         while(1){
            set<ll> st;
            f(i,0,n) st.insert(a[i]%ans);
            if(st.size()==2)break;
            ans*=2;
         }
         cout<<ans<<'\n';
      }
   
   return 0;
}