#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int index=1;
  while(1){
    int n,m,c;
    cin>>n>>m>>c;
    if(n==0 and m==0 and c==0) break;
    int a[n],b[m],ok[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    for(int i=0;i<n;i++)ok[i]=0;
    int sum=0,mx=-1,flag=1;
    for(int i=0;i<m;i++){
        if(ok[b[i]-1]){
            ok[b[i]-1]=0;
            sum-=a[b[i]-1];
        }else{
            ok[b[i]-1]=1;
            sum+=a[b[i]-1];
        }
        mx=max(mx,sum);
        // cout<<"sum: "<<sum<<endl;
        if(sum>c){
            printf("Sequence %d\nFuse was blown.\n\n",index++);
            // cout<<endl;
            flag=0;
            break;
        }
    }
    if(flag)printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",index++,mx);
    // cout<<endl;
  }
  
  
 return 0;
}