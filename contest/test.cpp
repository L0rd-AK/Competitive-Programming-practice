#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        if (b[i] > a[i]) {
            int needed = b[i] - a[i];
            bool canFulfill = false;

            for (int j = 0; j < n; j++) {
                if (i != j && (a[j] - b[j] < needed)) {
                    // prnt("NO");
                    break;
                }
            }

            if (!canFulfill) {
                cout << "NO" << endl;
                return;
            }
        }
    }

    // prnt("YES")
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
