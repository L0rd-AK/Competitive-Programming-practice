#include <bits/stdc++.h>
using namespace std;

bool canAchieveUnsavoriness(vector<int>& A, int N, int K, int U) {
    int segments = 1;  // Start with one segment
    int lower = A[0] - U, upper = A[0] + U;  // Initial allowable range for B_1

    for (int i = 1; i < N; i++) {
        int newLower = A[i] - U, newUpper = A[i] + U;

        // Check if the current range [lower, upper] intersects with [newLower, newUpper]
        if (newUpper < lower || newLower > upper) {
            // Create a new segment if the ranges don't overlap
            segments++;
            lower = newLower;
            upper = newUpper;
        } else {
            // Update the overlapping range
            lower = max(lower, newLower);
            upper = min(upper, newUpper);
        }

        // If we exceed the allowed number of segments, return false
        if (segments > K + 1) return false;
    }
    return true;
}

void solve() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int left = 0, right = 1e9, answer = right;

    // Binary search to find the minimum unsavoriness
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (canAchieveUnsavoriness(A, N, K, mid)) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << answer << "\n";
}

int main() {
    #ifndef ONLINE_JUDGE
freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
