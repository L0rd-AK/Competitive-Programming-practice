#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"

void decToBinary(ll n) {
  int binaryNum[33]={0};
  int i = 0;
  while (n > 0) {
    binaryNum[i] = n % 2;
    n /= 2;
    i++;
  }

  cout<<31<<endl;
  for (int j = 0; j<30; ) {
    if(binaryNum[j]==1 && binaryNum[j+1]==1){
      binaryNum[j]=-1;
      j++;
      while(binaryNum[j]==1 && j<30){
        binaryNum[j]=0;
        j++;
      }
      binaryNum[j]=1;
    }else j++;
  }
  for(int j=0;j<31;j++)cout<<binaryNum[j]<<" ";
  cout<<endl;
}
int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
   int t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    decToBinary(n);
   }

   return 0;
}