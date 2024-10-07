#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

const int maxN = 100000 + 5;
int dp[maxN];  


bool funk(int n, int i) {
    if (i == n) return true;         
    if (i > n) return false;         
    if (dp[i] != -1) return dp[i];  

    bool a = false, b = false, c = false;
    if (i + 3 <= n) {  
        a = funk(n, i + 3);
    }
    if (i * 2 <= n) { 
        b = funk(n, i * 2);
    }
    if (i * 2 + 3 <= n) { 
        c = funk(n, i * 2 + 3);
    }
    return dp[i] = (a || b || c);
}

void AKG() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));  
    yn(funk(n, 1));             
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
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
