#include <bits/stdc++.h>
using namespace std;

const int maxN = 1009;
int dx[8] = { 1,0,-1,0,-1,1,-1,1 };
int dy[8] = { 0,1,0,-1,-1,1,1,-1 };
int n;
bool visited[maxN][maxN];

bool isValid(int x, int y) {
   return (x <= n && x >= 1 && y <= n && y >= 1);
}

void bfs(int kx, int ky) {
   queue<pair<int, int>> q;
   q.push({ kx,ky });
   visited[kx][ky] = true;
   while (!q.empty()) {
      auto [x, y] = q.front();
      q.pop();
      for (int i = 0;i < 8;i++) {
         int DX, DY;
         DX = dx[i] + x;
         DY = dy[i] + y;
         if (!visited[DX][DY] && isValid(DX, DY)) {
            visited[DX][DY] = true;
            q.push({ DX,DY });
         }
      }
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int qx, qy, kx, ky, tx, ty;
   cin >> n;
   cin >> qx >> qy;
   cin >> kx >> ky;
   cin >> tx >> ty;
   for (int i = 0;i < 8;i++) {
      int DX, DY;
      DX = dx[i] + qx;
      DY = dy[i] + qy;
      while (isValid(DX, DY)) {
         visited[DX][DY] = true;
         DX += dx[i];
         DY += dy[i];
      }
   }
   
   bfs(kx, ky);
   if (visited[tx][ty]) {
      cout << "YES" << '\n';
   }
   else {
      cout << "NO" << '\n';
   }
   return 0;
}