#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    //freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int n,d,r;
  while(1){
    cin>>n>>d>>r;
    if(n==0 and d==0 and r==0) break;
    int mr[n],af[n],ot=0;
    for(int i=0;i<n;i++) cin>>mr[i];
    for(int i=0;i<n;i++) cin>>af[i];
    sort(mr,mr+n);
    sort(af,af+n);

    for(int i=0;i<n;i++){
        if(mr[i]+af[n-1-i]>d){
            ot+=((mr[i]+af[n-1-i])-d)*r;
        }
    }
    cout<<ot<<endl;
  }
  
  
 return 0;
}