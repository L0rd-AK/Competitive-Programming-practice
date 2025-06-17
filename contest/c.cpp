#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << "\n"
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

const int MOD = 1e9+7;
const int N = 1e6+5;
void AKG() {
int n, m;
        cin >> n >> m;
        vector<vi> a(n, vi(m));
        vi rmax(n, 0), cmax(m, 0), rg(n, 0), cg(m, 0);
        int G = 0, S = 0, totG = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int v;
                cin >> v;
                a[i][j] = v;
                if(v > G){
                    S = G;
                    G = v;
                    totG = 1;
                } else if(v == G){
                    totG++;
                } else if(v > S){
                    S = v;
                }
                rmax[i] = max(rmax[i], v);
                cmax[j] = max(cmax[j], v);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == G){
                    rg[i]++;
                    cg[j]++;
                }
            }
        }
        int Csize = 0;
        vi singleCols, multiCols;
        for(int j = 0; j < m; j++){
            if(cg[j] > 0){
                Csize++;
                if(cg[j] == 1) singleCols.push_back(j);
                else multiCols.push_back(j);
            }
        }
        vi rowSingleCount(n, 0);
        for(int j : singleCols){
            for(int i = 0; i < n; i++){
                if(a[i][j] == G) rowSingleCount[i]++;
            }
        }
        int ans = G;
        for(int i = 0; i < n; i++){
            int outside = Csize - rowSingleCount[i];
            if(outside > 1) continue;
            if(outside == 0){
                ans = min(ans, max(S, G - 1));
            } else {
                int job;
                if(multiCols.size() == 1){
                    job = multiCols[0];
                } else {
                    for(int j : singleCols){
                        if(a[i][j] != G){
                            job = j;
                            break;
                        }
                    }
                }
                int cand = max(S, max(rmax[i], cmax[job]) - 1);
                ans = min(ans, cand);
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
