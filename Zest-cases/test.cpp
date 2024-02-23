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
         int zeros=0;
         stack<int> zero_pos,one_pos;
         for(int i=0;i<n;i++){
            if(s[i]=='0'){
               zeros++;
               zero_pos.push(i+1);
            }else one_pos.push(i+1);
         }
         // printf("%d %d %d\n",zeros,zero_pos.size(),one_pos.size());
        
         int z=0;
         for(int i=n-1;i>=0;i--){
            if(i+1 < zeros)cout<<-1<<" ";
            else if(s[i]=='0')cout<<0<<" ";
            else{
               int pos1=one_pos.top();
               one_pos.pop();
               int pos0;
               while(1){
                  pos0=zero_pos.top();
                  zero_pos.pop();
                  if(pos1>pos0)break;
               }
               z+=abs(pos0-pos1);
               swap(s[pos0-1],s[pos1-1]);
               cout<<z<<" ";
            }
         }
         cout<<'\n';
      }
   
   return 0;
}