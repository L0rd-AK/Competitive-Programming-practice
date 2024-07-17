#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    int n; cin >> n;
    
    vector <int> ans(n + 1, 1);
    for (int i = 2; i <= n; i++){
        if (ans[i] == 1){
            for (int j = i; j <= n; j += i){
                int copy = j;
                while (copy % i == 0){
                    copy /= i;
                    ans[j]++;
                }
            }
        }
    }
    
    int mx = *max_element(ans.begin(), ans.end());
    cout << mx << "\n";
    
    for (int i = 1; i <= n; i++){
        cout << ans[i] << " \n"[i == n];
    }
}

int32_t main() 
{
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}