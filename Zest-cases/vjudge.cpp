#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int count1 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int x : a) {
            if (x == 1) {
                count1++;
            }
        }

        if (count1) {
            if (count1 == 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            int m = *min_element(a.begin(), a.end());
            bool foundNonDiv = false;
            int freq = 0;
            for (int x : a) {
                if (x % m != 0) {
                    foundNonDiv = true;
                }
                if (x == m) {
                    freq++;
                }
            }
            if (foundNonDiv) {
                cout << "YES\n";
            } else {
                if (freq == 1) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}