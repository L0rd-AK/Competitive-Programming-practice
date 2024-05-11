#include <bits/stdc++.h>
using namespace std;


int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    bool flag=false;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1])continue;
        else{
            flag=true;
            break;
        }
    }
    if(flag)cout<<"No\n";
    else  cout<<"Yes\n";
          
}