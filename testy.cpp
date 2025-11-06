#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll tt;
    cin>>tt;
    while(tt--)
    {
         ll n,q;cin>>n>>q;
         ll mx=600;
         string s;cin>>s;
         int f=0;
         for(int i=0;i<n;i++){
              if(s[i]=='B'){
                  f=1;
              }
         }
         
         ll brr[q+10];
         for(int i=1;i<=q;i++)
         {
             cin>>brr[i];
         }
         for(int i=1;i<=q;i++){
              ll a=brr[i],sum=0;
              if(f==0){
                  pr(a);
                  continue;
              }
              for(int j=1;j<=mx;j++)
              {
                    if(s[j%n]=='A'){
                        a--;
                        sum++;
                    }
                    else{
                        a=a/2;
                        sum++;
                    }
                    if(a<=0)break;
              }
              pr(sum);
         }
    }
    return 0;
}