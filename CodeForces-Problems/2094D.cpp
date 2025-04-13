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

vector<pair<char, int>> func(const string &x) {
    vector<pair<char, int>> res;
    if(x.empty()) return res;
    int cnt = 1, n = x.size();
    for (int i = 1; i < n; i++) {
        if(x[i] == x[i-1])
            cnt++;
        else {
            res.push_back({x[i-1], cnt});
            cnt = 1;
        }
    }
    res.push_back({x.back(), cnt});
    return res;
}
void AKG() {
    string a, b;
    cin >> a >> b;
    if(b.size() < a.size() || b.size() > 2 * a.size()){
        yn(0);
        return;
    }
    vector<pair<char,int>> x,y;
    int cnt = 1, n = a.size();
    for (int i = 1; i < n; i++) {
        if(a[i] == a[i-1])
            cnt++;
        else {
            x.push_back({a[i-1], cnt});
            cnt = 1;
        }
    }
    dbg(x);
    x.push_back({a.back(), cnt});

    cnt = 1, n = b.size();
    for (int i = 1; i < n; i++) {
        if(b[i] == b[i-1])
            cnt++;
        else {
            y.push_back({b[i-1], cnt});
            cnt = 1;
        }
    }
    dbg(y);
    y.push_back({b.back(), cnt});

    if(x.size() != y.size()){
        yn(0);
        return;
    }

    bool ok = true;
    for(int i = 0; i < x.size(); i++){
        if(x[i].first != y[i].first || y[i].second > 2 * x[i].second){
            ok = false;
            break;
        }else if( y[i].second < x[i].second){
            ok = false;
            break;
        }
    }
    yn(ok);
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
