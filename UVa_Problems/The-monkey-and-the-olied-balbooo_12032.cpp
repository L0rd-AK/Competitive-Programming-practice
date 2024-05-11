#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
  int t,index=1;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n+2];
    a[0]=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    int stamina=-1;
    for(int i=1;i<=n;i++){
        if((a[i]-a[i-1])>stamina){
            stamina=(a[i]-a[i-1]);
        } 
    }
    int ans=stamina,flag=0;
    for(int i=1;i<=n;i++){
        if((a[i]-a[i-1])==stamina){
            stamina--;
        }else if(a[i]-a[i-1]<stamina){

        }else{
            flag=1;
        }
    }
   if(flag)cout<<"Case "<<index++<<": "<<ans+1<<endl;
   else cout<<"Case "<<index++<<": "<<ans<<endl;
  }
  return 0;
}
