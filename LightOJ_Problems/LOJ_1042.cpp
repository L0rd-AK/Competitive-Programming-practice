#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ll t,index=1;
    cin>>t;
    while(t--){     ll x;
        cin>>x;
        vector<ll> v;
        while(x!=0){
            if(x%2) v.push_back(1);
            else v.push_back(0);
            x>>=1;
        }
        v.push_back(0);
        reverse(v.begin(),v.end());
        next_permutation(v.begin(), v.end());
        ll ans=0,to=1;
        for(ll i=v.size()-1;i>=0;i--){
            ans+=(to*v[i]);
            to*=2;
        }
        cout<<"Case "<<index++<<": "<<ans<<endl;

    }
    
}