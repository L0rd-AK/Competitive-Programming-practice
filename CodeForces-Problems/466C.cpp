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
const int N = 1e5+7;


void AKG(){
int n;
    cin>>n;
    vl a(n);
    ll total_sum=0;
    for(int i=0;i<n;++i) {
        cin>>a[i];
        total_sum+=a[i];
    }
    if(total_sum%3!=0) {
        pr(0);
        return;
    }
    ll part_sum=total_sum/3;
    ll current_sum=0;
    ll ways=0;
    ll count_first_part=0;
    for(int i=0;i<n-1;++i) {
        current_sum+=a[i];
        if(current_sum==2*part_sum) {
            ways+=count_first_part;
        }
        if(current_sum==part_sum) {
            count_first_part++;
        }
    }
    pr(ways);
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t; 
    while (t--)AKG();
    return 0;
}