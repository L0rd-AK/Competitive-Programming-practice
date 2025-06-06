#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define prnt(x) cout << x << endl

void AKG() {
    int n;
    cin >> n;
    priority_queue<int,vector<int>,greater<int>> pq;
    f(i, 0, n) {
        int x;
        cin >> x;
        pq.push(x); 
    }

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        if (x == 0) {
            int z;
            cin >> z;
            pq.push(z);
            cout << pq.top() << endl; 
        } else if (x == 1) {
            if (pq.empty()) prnt("Empty");
            else cout << pq.top() << endl; 
        } else if (x == 2) {
            if (!pq.empty()) pq.pop(); 
            if (pq.empty()) prnt("Empty");
            else cout << pq.top() << endl; 
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }
#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
#endif
    return 0;
}
