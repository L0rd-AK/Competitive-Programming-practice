#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        while (q--) {
            ll x, y;
            cin >> x >> y;
            x--;
            ll a,b,ans_a,ans_b;
            if(x%2==1){
                a=x/2;
                ans_a=a*(a+1);
                ans_a+=(a+1);
            }else{
                a=x/2;
                a=a*(a+1);
                ans_a=a;
            }
            if(y%2==1){
                b=y/2;
                ans_b=b*(b+1);
                ans_b+=(b+1);
            }else{
                b=y/2;
                b=b*(b+1);
                ans_b=b;
            }
            // cout<<a<<" "<<b<<endl;
            cout<<ans_b-ans_a<<endl;
            
        }
    }

    #ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;
}
