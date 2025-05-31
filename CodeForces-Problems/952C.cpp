#include <bits/stdc++.h>
using namespace std;


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


const int MOD = 1e9+7;
const int N = 1e6+5;
void AKG() {
    int n;cin >> n;
    vi v(n);
    for(auto &x: v) cin >> x;
    f(i,0,n-1){
        if(abs(v[i+1]-v[i])>=2) {
            yn(0);
            return;
        }
    }
    yn(1);
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
