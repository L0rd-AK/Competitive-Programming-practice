#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define llf double

ll coinWay(ll coin[], ll amount, ll n){
    ll dp[n+1][amount+1];

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= amount; j++){
            if(j == 0 && i == 0) dp[i][j] = 1;
            else if(i == 0) dp[i][j] = 0;
            else if(j < coin[i-1]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j] + dp[i][j-coin[i-1]];
        }
    }

    return dp[n][amount];
}

void solve() {

    ll a,b;
    cin>>a>>b;

    ll coin[a];
    for (int i = 0; i < a; i++) cin>>coin[i];

    cout<<coinWay(coin,b,a)<<endl;

}

int main() {

    ll t; 
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}