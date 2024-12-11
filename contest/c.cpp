#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define debug(p) for(auto i:p)cout<<i<<" ";cout<<endl;

vector<int> func(int n, int sum) {
    if (n == 1) {
        return {1};
    }
    if (n == 3) {
        return {1, 2, 3};
    }
    if (sum % (n + 1) == 0) {
        return {-1};
    }

    vector<int> permutation(n);
    for (int i = 0; i < n; i++) {
        permutation[i] = (i + 1);
    }
    for (int i = 0; i < n; i++) {
        int ans = 0;
        for (int j = i; j < n; j++) {
            ans += permutation[j];
            if (ans % (n + 1) == 0 && j < n - 1) {
                swap(permutation[j], permutation[j + 1]);
            }
        }
    }

    return permutation;
}

void AKG() {
    int n;
    cin >> n;
    int sum = 0;
    f(i, 1, n + 1) sum += i;
    vector<int> ans = func(n, sum);

    if (ans[0] == -1) {
        cout << "No valid permutation" << endl;
    } else {
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
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
