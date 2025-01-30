#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()


#ifdef LOCAL
#include "D:\VS-Code\Competitive programming practice\Zest-cases\dbg.h"
#else
#define dbg(x...) 
#endif

void AKG() {
    int n;cin>>n;
    int ax=-1;
    f(i,0,n){
        int x;cin>>x;
        dbg(ax,x,i);
        if(x>ax+1){
            pt(i+1);
            return;
        }
        ax=max(ax,x);
    }
    pt(-1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while (t--){
        AKG();
    }

    return 0;
}
