#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

int max_segment(vector<int>& a) {
    unordered_map<long long, int> mp;
    long long prefixSum = 0;
    int ans = 0;
    
    mp[0] = -1;

    for (int i = 0; i < a.size(); i++) {
        prefixSum += a[i];
        if (mp.find(prefixSum) != mp.end()) {
            ans++;
            mp.clear();
            prefixSum = 0;
            mp[0] = i; 
        } else {
            mp[prefixSum] = i;
        }
    }

    return ans;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
        auto begin = std::chrono::high_resolution_clock::now();
    #endif

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        prnt(max_segment(a));
    }
    #ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;
}
