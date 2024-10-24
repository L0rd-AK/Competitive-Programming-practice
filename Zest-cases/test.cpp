#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl



void AKG() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));
    int ans=0;
    f(i, 0, n) {
        f(j, 0, n) {
            cin >> a[i][j];
            int x = a[i][j];
            if (x < 0) {
                ans += abs(x);
            }
        }
    }

    int ma=0;
    f(i, 0, n - 1) {
        f(j, 0, n - 1) {
            
            if(a[i][j]<0 && a[i + 1][j + 1] < 0){
                while(a[i][j]<0 && a[i + 1][j + 1] < 0){
                    ma++;
                    a[i][j]++;
                    a[i + 1][j + 1]++;
                }
            }
            if(a[i][j + 1] < 0 && a[i + 1][j] < 0){
                while(a[i][j + 1] < 0 && a[i + 1][j] < 0){
                    ma++;
                    a[i][j + 1]++;
                    a[i + 1][j]++;
                }
            }
        }
    }
    
    // cout<<ans<<" "<<ma<<endl;
    prnt(ans-ma);
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
