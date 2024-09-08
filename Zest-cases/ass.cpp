#include <bits/stdc++.h>
#include <cstring>  // For memset
#include <chrono>   // For measuring time

using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define prnt(x) cout << x << endl

const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];

// Depth First Search (DFS) function to traverse the graph
void dfs(int src) {
    vis[src] = true;
    for (int child : v[src]) {
        if (!vis[child]) dfs(child);
    }
}

// Function to handle input and processing
void AKG() {
    int n, e;
    cin >> n >> e;
    while (e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        memset(vis, false, sizeof(vis));  // Reset visited array for each query
        dfs(a);  // Perform DFS from the starting node
        if (vis[b]) yes;
        else no;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin); // For local debugging, replace with your file path if needed
    auto begin = std::chrono::high_resolution_clock::now();
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;  // Uncomment if multiple test cases are needed
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
