#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl

char a[1005][1005];
bool vis[1005][1005];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '-' || vis[i][j])
        return false;
    return true;
}

int dfs(int si, int sj) {
    vis[si][sj] = true;
    int size = 1;
    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj)) {
            size += dfs(ci, cj);
        }
    }
    return size;
}

void AKG() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    int min_sz = INT_MAX;
    bool flg = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.' && !vis[i][j]) {
                int region_size = dfs(i, j);  
                min_sz = min(min_sz, region_size);
                flg = true;  
            }
        }
    }

    if (!flg) {
        prnt(-1);
    } else {
        prnt(min_sz);  
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t; 
    while (t--) {
        AKG();
    }

    return 0;
}
