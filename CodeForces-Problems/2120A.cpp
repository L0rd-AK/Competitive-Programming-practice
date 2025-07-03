#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << "\n"
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

const int MOD = 1e9+7;
const int N = 5e8+4;


void AKG() {
    int a1,b1,a2,b2,a3,b3;cin>>a1>>b1>>a2>>b2>>a3>>b3;
    // ll ans=(a1*b1)+(a2*b2)+(a3*b3);
    // ll x=sqrt(ans);
    // yn(x*x==ans);
    if(a1==a2&&a2==a3&&a3==a1&&a1==b1+b2+b3)yn(1);
    else if(b1==b2&&b2==b3&&b3==b1&&b1==a1+a2+a3)yn(1);
    else if(a2+a3 == a1 && b2==b3 && b1+b2==a1)yn(1);
    else if(b2+b3 == b1 && a2==a3 && a1+a2==b1)yn(1);
    else yn(0);
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while (t--)AKG();
    return 0;
}