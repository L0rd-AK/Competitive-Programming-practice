#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
bool vis[N][N];
int dx[4] = {0, 0, 1, -1};
int dy[4] =  {1, -1, 0, 0}; 
map<pair<int, int>, pair<int, int>> par;
int n, m;
char a[N][N];

bool valid(int ci, int cj) {
    if (ci >= 0 && ci < n && cj >= 0 && cj < m && (a[ci][cj] == '.' || a[ci][cj] == 'D'))
        return true;
    return false;
}

void bfs(int si, int sj) {
    vis[si][sj] = true;

    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty()) {
        pair<int, int> node = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ci = node.first + dx[i];
            int cj = node.second + dy[i];

            if (valid(ci, cj) && !vis[ci][cj]) {
                vis[ci][cj] = true;
                q.push({ci, cj});
                par[{ci, cj}] = {node.first, node.second};
            }
        }
    }
}

int main() {
    cin >> n >> m;
    memset(vis, false, sizeof(vis));

    int si = 0, sj = 0, x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'R') {si=i;sj=j;}
            if (a[i][j] == 'D'){x=i;y=j;}
        }
    }

    bfs(si, sj);

    int sti = x, stj = y;

    if(vis[x][y]){
        while (a[sti][stj] != 'R') {
            if (a[sti][stj] != 'D') {
                a[sti][stj] = 'X';  
            }
            auto parent = par[{sti, stj}];
            sti = parent.first;
            stj = parent.second;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
