#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000]={0};
int v[1000],w[1000];
int main() {
  //freopen("D:\\VS-Code\\DSA\\input.txt","r",stdin);
 // freopen("D:\\VS-Code\\DSA\\output.txt","w",stdout);
  int t;
  cin>>t;
  while(t--){
    int numberOf_item,numberOf_people,value,weight,capacity,ans=0;
    cin>>numberOf_item;
    for(int i=0;i<numberOf_item;i++) cin>>v[i]>>w[i];
    cin>>numberOf_people;
    int z=numberOf_people;
    while(z--){
      cin>>capacity;
      for(int i=0;i<=numberOf_item;i++){
        for(int j=0;j<=capacity;j++){
          if(i==0 || j==0)dp[i][j]=0;
          else if(j<w[i-1])dp[i][j]=dp[i-1][j];
          else{
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
          }
          //printf("(%d,%d)=>(%d)",i,j,dp[i][j]);
        }//cout<<endl;
        //cout<<numberOf_item<<" "<<capacity<<endl;
      }ans+=dp[numberOf_item][capacity];
      //cout<<capacity<<" "<<numberOf_item<<endl;
    }
    cout<<ans<<endl;
  }

  return 0;
}