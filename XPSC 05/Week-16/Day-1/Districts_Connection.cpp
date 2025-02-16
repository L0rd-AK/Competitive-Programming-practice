#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<ll, ll>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif
const int N  = 2e5+10;
void AKG() {
    int n;cin>>n;
    vl a(n);
    f(i,0,n)cin>>a[i];
    ll mn=*min_element(all(a));
    ll mx=*max_element(all(a));
    if(mn==mx){
        yn(0);
        return;
    }
    yn(1);
    int j=0;
    f(i,1,n){
        if(a[0]!=a[i]){
            cout<<"1 "<<i+1<<endl;
            j=i;
        }
    }
    f(i,1,n){
        if(a[0]==a[i])cout<<j+1<<" "<<i+1<<endl;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
