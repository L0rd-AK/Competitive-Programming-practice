#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n, k;
    cin >> n >> k;
    int a[n];
    f(i,0,n)cin>>a[i];
    int rem = 0;
    bool flg=1;
    for (int i = 0; i < n; i++) {
        int x=a[i];
        if (i == 0) {
            if (x < k) {
                cout << "NO " << 1 << endl;
                flg=0;
                break;
            }
            rem = x - k;
        } else {
            if ((x + rem) < k) {
                cout << "NO " << i + 1 << endl;
                flg=0;
                break;
            }
            rem = (x + rem) - k;
        }
    }

    if(flg)yn(1);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
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
