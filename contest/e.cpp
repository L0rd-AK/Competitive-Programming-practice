#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> values; // To store values
    stack<int> indices; // To store indices

    values.push(arr[0]);
    indices.push(0);

    int max_diff = 0;

    for (int i = 1; i < n; i++) {
        int val = arr[i];

        // Pop smaller values and their indices
        while (!values.empty()) {
            int top = values.top();
            if (top < val) {
                values.pop();
                indices.pop();
            } else {
                break;
            }
        }

        // Calculate the difference if the stack is not empty
        if (!values.empty()) {
            int top_index = indices.top();
            int diff = i - top_index - 1;
            max_diff = max(max_diff, diff);
        } else {
            max_diff = i; // If stack is empty
        }

        // Push current value and its index into the stacks
        values.push(val);
        indices.push(i);
    }

    cout << max_diff << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
