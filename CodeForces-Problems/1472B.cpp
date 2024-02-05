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
     int a[n];
     int sum=0; 
     set<int> st;
     f(i,0,n){cin>>a[i];sum+=a[i];st.insert(a[i]);}
     int one=0,tw0=0;
     f(i,0,n){
      if(a[i]==1)one++;
      if(a[i]==2)tw0++;
     }
     bool flag=true;
     if(sum%2==1){
        cout<<"NO\n";flag=false;
     }
     else{
        if(st.size()==1){
            if(one%2==1 or tw0%2==1){cout<<"NO\n";flag=false;}
        }
     }
     if(flag)cout<<"YES\n";
   }
   return 0;
}