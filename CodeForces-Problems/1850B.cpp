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
      int n,x,y;
      cin>>n;
      int a[n],b[n];
      for(int i=0;i<n;i++) cin>>a[i]>>b[i];
      int mx=INT_MIN,idx=-1;
      for(int i=0;i<n;i++){
         if(a[i]<=10 and b[i]>mx){
            mx=b[i];
            idx=i+1;
         }
      }
      cout<<idx<<endl; 
   }
   

    
	return 0;
}