#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<ll, ll>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif

const int MOD = 998244353;
const int N = 1005;
vi a[N];
bool vis[N][N];

bool isValid(int x,int y,int n,int m){
    return (x>=0 && x<n && y>=0 && y<m && !vis[x][y] && a[x][y]!=0);
 }

void AKG() {
    int n,m;cin>>n>>m;
    f(i,0,n){ a[i].assign(m,0);
        f(j,0,m){
            cin>>a[i][j];
            vis[i][j]=0;
        }
    }
    ll ans=0;
    f(i,0,n){
        f(j,0,m){
           if(a[i][j]!=0 && !vis[i][j]){
                queue<pi> q;
                q.push({i,j});
                vis[i][j]=1;
                ll sum=0;
                while(!q.empty()){
                     pi p=q.front();
                     q.pop();
                     sum+=a[p.first][p.second];
                     int dx[]={0,0,1,-1};
                     int dy[]={1,-1,0,0};
                     f(k,0,4){
                          int x=p.first+dx[k];
                          int y=p.second+dy[k];
                          if(isValid(x,y,n,m)){
                            vis[x][y]=1;
                            q.push({x,y});
                          }
                     }
                }
                ans=max(ans,sum);
           }
        }
    }
    pr(ans);

}

int main() {
#ifdef LOCAL
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
