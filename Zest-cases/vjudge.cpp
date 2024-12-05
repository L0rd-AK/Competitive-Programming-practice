#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;

    // Input the array and calculate the total sum
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    // If the total sum is not divisible by n, it's impossible to equalize
    if (sum % n != 0) {
        yn(0);
        return;
    }

    ll target = sum / n;

    // Redistribute values from left to right
    for (int i = 0; i < n - 1; i++) {
        ll diff = a[i] - target; // Excess or deficit at the current index
        a[i] -= diff;           // Set current element to the target
        a[i + 1] += diff;       // Pass excess/deficit to the next element

        // If any value becomes negative, it's impossible to equalize
        if (a[i] < 0 || a[i + 1] < 0) {
            yn(0);
            return;
        }
    }

    // Check if the last element is also equal to the target
    yn(a[n - 1] == target);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
