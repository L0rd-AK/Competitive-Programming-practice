#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[21];

int main(){
    int index=1;
    a[0]=1;
    a[1]=1;
    for(int i=2;i<21;i++) a[i]=a[i-1]*i;
    ll t,x;
    cin>>t;
    while(t--){
        cin>>x;
        vector<ll> v(0);
        for(int i=20;i>=0;i--){
            if(a[i]<=x){
                x-=a[i];
                v.push_back(i);
                if(x==0) break;
            }
        }
        if(x==0){
            cout<<"Case "<<index++<<": ";
            for(auto i=v.end()-1;i>v.begin();i--) cout<<(*i)<<"!+";
            cout<<v[0]<<"!";
            cout<<endl;
        }else cout<<"Case "<<index++<<": "<<"impossible"<<endl;

    }
    
}