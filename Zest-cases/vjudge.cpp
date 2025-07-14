#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;      // value
    int idx;      // original position 0..n-1
    char tag;     // 'a', 'b', or 'c'
};

void solve() {
    int n; cin >> n;
    vector<Node> v;
    v.reserve(3 * n);

    for (int i = 0, x; i < n; ++i) { cin >> x; v.push_back({x, i, 'a'}); }
    for (int i = 0, x; i < n; ++i) { cin >> x; v.push_back({x, i, 'b'}); }
    for (int i = 0, x; i < n; ++i) { cin >> x; v.push_back({x, i, 'c'}); }

    sort(v.begin(), v.end(), [](const Node& p, const Node& q) {
        return p.val > q.val;
    });

    long long ans = 0;
    unordered_set<int> usedIdx;
    unordered_map<char, int> best;           // tag -> value

    for (const auto& node : v) {
        if (!best.count(node.tag) && !usedIdx.count(node.idx)) {
            best[node.tag] = node.val;
            usedIdx.insert(node.idx);
            if (best.size() == 3) break;
        }
    }

    if (best.size() == 3)
        ans = 1LL * best['a'] + best['b'] + best['c'];

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
