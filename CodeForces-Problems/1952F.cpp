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
    int a[21][21], t = 0, m = 0, i, j, k, l;
    char c;
    for (i = 0; i < 21; i++)
        for (j = 0; j < 21; j++)
            a[i][j] = (cin >> c, c - 48);
    for (i = 0; i < 18; i++)
        for (j = 0; j < 18; j++, m = max(m, t), t = 0)
            for (k = 0; k < 4; k++)
                for (l = 0; l < 4; l++)
                    t += a[i + k][j + l];
    cout << m;
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