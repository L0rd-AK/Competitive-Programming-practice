#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "Yes\n" : cout << "No\n"
#define prnt(x) cout << x << endl

void AKG() { 
    int n;
    cin >> n;
    vector<ll> a(n), b(n),ans(n);
    set<int> st1, st2;
    f(i, 0, n) {
        cin >> a[i];
        st1.insert(a[i]);
    }
    f(i, 0, n) {
        cin >> b[i];
        st2.insert(b[i]);
    }
    ll mx_a = -1;
    ll mx_idx = -1;
    f(i,0,n){
        if (a[i] > mx_a)
        {
            mx_a = a[i];
            mx_idx = i;
        }
    }
    ll mx_a2 = -1;
    ll mx_idx2 = -1;
    f(i,0,n){
        if (i == mx_idx)continue;
        if (a[i] > mx_a2){
            mx_a2 = a[i];
            mx_idx2 = i;
        }
    }

    ll mx_b = b[mx_idx];
    ll max_ab = max(mx_a, mx_b);
    ll max_ab2 = -1;
    if (mx_idx2 != -1)
    {
        max_ab2 = max(mx_a2, a[mx_idx2]);
    }
    bool l = false;
        if (mx_idx2 != -1)
        {
            l = (max_ab > max_ab2);
        }

        bool r = false;
        for (int i = 0; i < n; i++)
        {
            if (i == mx_idx)
                continue;
            if (b[i] > max_ab)
            {
                r = true;
                break;
            }
        }
    yn(l || r);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
