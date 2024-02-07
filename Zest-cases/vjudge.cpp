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
      int n,m,k;
      cin>>n>>m>>k;
      int size=2*min(n,m);
      bool kk[size]={false},check_a=false,check_b=false;
      int x;
      set<int> st,a_st,b_st;

      f(i,0,n){
         cin>>x;
         kk[x]=true;
         if(x<=k){a_st.insert(x);}
         st.insert(x);
      }
      f(i,0,m){
         cin>>x;
         kk[x]=true;
         if(x<=k){b_st.insert(x);}
         st.insert(x);
      }
      if(a_st.size()>=k/2)check_a=true;
      else{
         cout<<"NO\n";
         continue;
      }
      if(b_st.size()>=k/2)check_b=true;
      else{
         cout<<"NO\n";
         continue;
      }
      // for(auto i:st)cout<<i<<" ";
      // cout<<"st size(): "<<st.size()<<" "<<k<<endl;
      if(st.size()>=k){
         bool flag=true;
         for(int i=1;i<=k;i++){//cout<<kk[i]<<" ";
            if(kk[i]==false){
               flag=false;
               cout<<"NO\n";
               break;
            }
         }if(flag)cout<<"YES\n";
      }else cout<<"NO\n";
      //st.clear(),a_st.clear(),b_st.clear();
      
   }
   return 0;
}