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

void AKG() {
    int n,m;cin>>n>>m;
    char a[n][m];
    f(i,0,n){
        f(j,0,m){
            cin>>a[i][j];
            if(a[i][j]=='.'){
                if(i%2==0&&j%2==0)a[i][j]='B';
                else if(i%2==1&&j%2==1)a[i][j]='B';
                else a[i][j]='W';
            }
        }
    }
    f(i,0,n){
        f(j,0,m){
            cout<<a[i][j];
        }cout<<endl;
    }
    
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
