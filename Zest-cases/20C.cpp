#include <bits/stdc++.h>
using namespace std;
#define prnt(x) cout << x << endl
#define ll long long int
#define endl "\n"


int main() {
     #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll N, Q;
    cin >> N >> Q;

    vector<ll> prefix((N / 2), 2); 
    for (ll i = 1; i < N/2; i++) {
        prefix[i] = prefix[i - 1] + 2 * i;  
    }
    for (ll i = 0; i < N / 2; i++) {
        cout<<prefix[i]<<" "; 
    }

    while (Q--) {
        ll L, R;
        cin >> L >> R;

        ll l = (L+1) / 2;  
        ll r = (R+1) / 2; 
        if(l<=0) prnt(prefix[r]);
        else{
            ll sum = prefix[r] - prefix[l - 1];
            cout << sum << endl;
        }
    }

     #ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;
}
