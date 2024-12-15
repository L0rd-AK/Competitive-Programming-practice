#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

// Debugging macros for testing
void __print(int x) { cerr << x; }
template <typename T> void __print(const T &x) { cerr << '{'; for (auto &i : x) cerr << " " << i; cerr << " }"; }
template <typename... T> void _print(T... args) { ((cerr << " " << args), ...); cerr << endl; }
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "]:"; _print(x)
#else
#define dbg(x...)
#endif

void AKG() {
    int n;
    cin >> n;

    unordered_map<ll, ll> freq_map;                // Map to store frequencies
    priority_queue<pair<ll, ll>> pq;               // Max heap {frequency, -value} to ensure max freq and smallest value
    vector<ll> x(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i];
        freq_map[x[i]]++;                          // Update the frequency of current element
        pq.push({freq_map[x[i]], -x[i]});          // Push {frequency, -value} into max heap

        // Remove stale elements (outdated frequencies) from the top of the priority queue
        while (!pq.empty()) {
            ll freq = pq.top().first;              // Top frequency
            ll value = -pq.top().second;           // Top value (converted back to positive)

            if (freq_map[value] == freq) {         // Check if the top element is valid
                cout << value << " ";              // Print the mode at this step
                break;
            }
            pq.pop();                              // Remove stale elements
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;                                     // Number of test cases
    while (t--) {
        AKG();
    }

    return 0;
}
