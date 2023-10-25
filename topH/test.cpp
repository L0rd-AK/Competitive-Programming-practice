#include <bits/stdc++.h>
using namespace std;
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m]={0};
        ff(i,0,n){
            ff(j,0,m)cin>>a[i][j];
        }
        int ans=0;
        if(n==1 and m==1){cout<<a[1][1]<<'\n';return 0;}
        else if(n==1 and m>1){
            ff(i,0,m)ans+=a[1][i];
        }else if(m==1 and n>1){
            ff(i,0,n)ans+=a[i][1];
        }else if(n==2 and m==2){
            int s1=0,s2=0,s3=0,s4=0;
            ff(i,0,n)s1+=a[i][1];s1+=a[2][2];
            ff(i,0,n)s2+=a[i][2];s2+=a[0][0];
            ff(i,0,n)s3+=a[i][1];s3+=a[2][2];s3+=a[2][1];
        }
        
        cout<<ans<<endl;
    }
    
    
    
    return 0;
}