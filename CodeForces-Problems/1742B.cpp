#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif

   int t;
   cin>>t;
   while(t--){
      int n,x;
      cin>>n;
      set<int> st;
      for(int i=0;i<n;i++){
         cin>>x;
         st.insert(x);
      }
      if(st.size()==n)cout<<"Yes\n";
      else cout<<"No\n";
   }
    
	return 0;
}