#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

const int MAXN = 300005;

struct FenwickTree {
    vector<int> bit;
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n + 1, 0);
    }

    void add(int idx, int val) {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] += val;
    }

    int sum(int idx) {
        int ret = 0;
        for (; idx > 0; idx -= idx & -idx)
            ret += bit[idx];
        return ret;
    }

    int rangeSum(int l, int r) {
        return sum(r) - sum(l - 1);
    }
};

void AKG() {
    int n;
    cin >> n;
    vector<int> A(n);
    map<int, int> valueToIndex;
    f(i, 0, n) {
        cin >> A[i];
        valueToIndex[A[i]] = i + 1;
    }

    sort(all(A));
    FenwickTree fenwick(n);

    set<vector<int>> distinctRanks;

    f(i, 1, n + 1)
        fenwick.add(i, 1);

    for (int i = 0; i < n; ++i) {
        fenwick.add(valueToIndex[A[i]], -1);
        vector<int> ranks;
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            ranks.push_back(fenwick.rangeSum(1, valueToIndex[A[j]]));
        }
        distinctRanks.insert(ranks);
        fenwick.add(valueToIndex[A[i]], 1);
    }

    prnt(distinctRanks.size());
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
