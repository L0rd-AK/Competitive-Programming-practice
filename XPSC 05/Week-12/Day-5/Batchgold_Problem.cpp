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
   if(n%2==0){
      cout<<n/2<<'\n';
      f(i,0,n/2)cout<<"2 ";
      cout<<'\n';
   }else{
      cout<<n/2<<'\n';
      f(i,0,(n/2)-1)cout<<"2 ";
      cout<<"3\n";
   }
   return 0;
}