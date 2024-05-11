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
      f(i,0,n)cin>>a[i];
      int liers=-1;
      f(i,0,n){
         int suspects=0,ans=0;
         f(j,0,n){
            if(a[j]>a[i])suspects++;
         }
         f(j,0,n){
            if(a[j]>suspects)ans++;
         }
         if(suspects==ans and ans>=a[i])liers=ans;
      }
      cout<<liers<<endl;
   }
   
   
    
	return 0;
}