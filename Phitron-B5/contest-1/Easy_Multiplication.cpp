#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    int n;cin>>n;
    int a[n],p[n]={0};
    f(i,0,n)cin>>a[i];
    if(a[0]==0)p[0]=1;
    f(i,1,n){
        if(a[i]==0)p[i]=1+p[i-1];
        else p[i]=p[i-1];
    }
    // f(i,0,n)cout<<p[i]<<" ";
    // cout<<endl;
    int q;cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;r--;
        if(l==1){
            if(p[r])cout<<"NO\n";
            else cout<<"YES\n";
        }
        else{  
            if(p[r]-p[l-1])cout<<"NO\n";
            else cout<<"YES\n";
        }
        
    }
   
      
   

    return 0;
}