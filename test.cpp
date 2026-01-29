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
ll N = 1e18;

void AKG(){
    int n;cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> b = a;
    sort(all(b));
    int left=0, right=n-1;
    for (int i = 0; i < n; i++){
        if (a[i] != b[i])
        {
            left=i;
            break;
        }
    }
    for (int i = n-1; i >=0; i--){
        if (a[i]==b[left])
        {
            right=i;
            break;
        }
    }
    for (int i = 0; i < left; i++){
        cout << a[i] << " ";
    }
    for (int i = right; i >= left; i--){
        cout << a[i] << " ";
    }
    for (int i = right+1; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while(t--)AKG();
    return 0;
}
