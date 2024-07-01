#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        bool flg=1;
        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(a[i]+a[j]+a[k]==s){
                        cout<<"YES\n";
                        flg=0;
                        break;
                    }  
                }
                if(!flg)break;
            }
            if(!flg)break;
        }
        if(flg)cout<<"NO\n";
    }

    return 0;
}