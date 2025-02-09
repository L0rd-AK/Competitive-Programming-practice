#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<int, int>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...) 
#endif
// #define N 200005


void AKG() {
    int n;cin>>n;
    vi a(n);
    f(i,0,n)cin>>a[i];
    vi ans;
    map<int,int> mp;
    f(i,0,n){
        if(mp[a[i]%10]<3)ans.pb(a[i]%10);
        mp[a[i]%10]++;
    }
    int sz=ans.size();
    bool ok=0;
    f(i,0,sz){ if(ok)break;
        f(j,i+1,sz){ if(ok)break;
            f(k,j+1,sz){
                if((ans[i]+ans[j]+ans[k])%10==3){
                    yn(1);
                    ok=1;
                    return;
                }
            }
        }
    }
    yn(0);
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
