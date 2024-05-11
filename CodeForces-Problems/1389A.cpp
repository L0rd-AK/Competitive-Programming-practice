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

   int n;
   cin>>n;
   while(n--){
      ll l,r;
      cin>>l>>r;
      if(r%2==0 and (r/2)>=l){
        ll lcm=(r*(r/2))/__gcd(r,r/2);
        if(lcm>=l and lcm<=r)cout<<min(r/2,r)<<" "<<max(r/2,r)<<'\n';
        else cout<<-1<<" "<<-1<<endl;
      }else if(r%2==1 and (r/2)>=l){//cout<<r/2<<" "<<l<<endl;
        r--;
        ll lcm=(r*(r/2))/__gcd(r,r/2);
        if(lcm>=l and lcm<=r)cout<<min(r/2,r)<<" "<<max(r/2,r)<<'\n';
        else cout<<-1<<" "<<-1<<endl;
      }else cout<<-1<<" "<<-1<<endl;
      

   }
   return 0;
}