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
      int n;
      cin>>n;
      char arr[n][n];
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            cin>>arr[i][j];
         }
      }
      set<int> s;
      for(int i=0;i<n;i++){
         int cnt=0;
         for(int j=0;j<n;j++){
            if(arr[i][j]=='1')cnt++;
         }
         if(cnt)s.insert(cnt);
      }
      if(s.size()==1)cout<<"SQUARE\n";
      else cout<<"TRIANGLE\n";

   }
   
   return 0;
}