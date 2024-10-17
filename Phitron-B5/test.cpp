#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

void AKG() {
    int n, k;
    cin >> n >> k;
    int a[n];
    f(i, 0, n) cin >> a[i];
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    vector<pair<int, int>> vec(mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), cmp);
    int ans=vec[0].second,idx=0,prev=vec[0].second;
    for (int i=1;i<vec.size();i++) {
        if(idx>k)break;
        idx++;
        if((prev-vec[i].second)<=1){
            ans+=vec[i].second;
            prev=vec[i].second;
        }
    }
    prnt(ans);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    #ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;
}
