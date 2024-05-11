#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    // cout<<1%3<<endl;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if((n+1)%3==0 or (n-1)%3==0) cout<<"First\n";
        else cout<<"Second\n";
    }
     
    return 0;
}