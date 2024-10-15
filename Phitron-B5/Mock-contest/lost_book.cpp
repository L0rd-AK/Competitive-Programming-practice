#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl


void AKG() {
    int n;cin>>n;
    int a[n];
    f(i,0,n)cin>>a[i];
    int tr;cin>>tr;
    bool ok=0;
    int idx=0;
    f(i,0,n){
        if(a[i]==tr){
            ok=1;
            idx=i;
            break;
        }
    }
    if(ok)prnt(idx);
    else prnt(-1);
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
