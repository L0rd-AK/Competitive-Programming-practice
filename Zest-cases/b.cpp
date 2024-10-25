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
    
    f(i, 0, n) {
        f(j, 0, n) {
            cin >> a[i][j];
        }
    }

    int ans=0;
    f(i, 0, n) {
        int mn=0;
        int x=0,y=i;
        while(x>=0 && x<n && y>=0 && y<n){
            if(a[x][y]<0)mn=min(mn,a[x][y]);
            x++;y++;
            // cout<<mn<<" ";
        }
        ans+=(mn*-1);
    }
    f(i, 1, n) {
        int mn=0;
        int x=i,y=0;
        while(x>=0 && x<n && y>=0 && y<n){
            if(a[x][y]<0)mn=min(mn,a[x][y]);
            x++;y++;
            // cout<<mn<<" ";
        }
        ans+=(mn*-1);
    }
    
    prnt(ans);
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
