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
         int n; cin>>n;
         string s; cin>>s;
         int zeros=0,pos=0;
         vector<ll> v;
         reverse(s.begin(),s.end());
         for(int i=0;i<n;i++){
            if(s[i]=='0'){
               v.push_back(pos);
            }
            else pos++;
         }
         for(int i=1;i<v.size();i++)v[i]+=v[i-1];
         // printf("%d %d %d\n",zeros,zero_pos.size(),one_pos.size());
         
         for(int i=0;i<n;i++){
            if(i+1 > v.size())cout<<-1<<" ";
            else cout<<v[i]<<" ";
         }
         cout<<'\n';
      }
   
   return 0;
}