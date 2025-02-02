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
#define N 200005

void AKG() {
    int n;cin>>n;
    vector<int> ar(n), br(n);
    f(i,0,n){
        int a, b;
        cin >> a >> b;
        ar[i] = a;
        br[i] = b;
    }
    dbg(ar, br);
    sort(all(ar));
    sort(all(br));
    ll ans = 0,cnt=0;
    int i=0,j=0;
    while(i<n && j<n){
        if(ar[i] < br[j]){
            cnt++;
            ans = max(ans, cnt);
            i++;
        }else{
            j++;
            cnt--;
        }
    }
    pt(ans);
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
