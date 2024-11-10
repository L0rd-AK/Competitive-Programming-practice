#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

int diagonals(int i, int j, int n, int m, vector<vector<int>>& a) {
    int now = 0;
    int ci = i, cj = j;
    while (ci >= 0 && cj >= 0) now += a[ci--][cj--];
    ci = i; cj = j;
    while (ci >= 0 && cj < m) now += a[ci--][cj++]; 
    ci = i; cj = j;
    while (ci < n && cj >= 0) now += a[ci++][cj--];
    ci = i; cj = j;
    while (ci < n && cj < m) now += a[ci++][cj++];
    return now - 3 * a[i][j];
}   

void AKG() { 
    int n, m; cin >> n >> m; 
    vector<vector<int>> a(n, vector<int>(m)); 
    f(i,0,n){
        f(j,0,m){
            cin >> a[i][j]; 
        }
    }

    int mx = 0;
    f(i,0,n){
        f(j,0,m){
            mx = max(mx, diagonals(i, j, n, m, a)); 
        }
    }
    cout << mx << endl; 
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }



    return 0;
}
