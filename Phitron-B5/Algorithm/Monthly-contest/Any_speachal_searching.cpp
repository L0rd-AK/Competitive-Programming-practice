#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl

int BS(const vector<ll>& p, ll des) {
    int low = 0, high = p.size() - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;  

        if (p[mid] >= des) {
            ans = mid + 1;  
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    vector<ll> a(n), p(n);
    for (int i = 0; i < n; i++)cin>>a[i];

    p[0]=a[0];
    for (int i = 1; i < n; i++) {
        p[i] = p[i - 1] + a[i];
    }
    int q;
    cin >> q;
    while (q--) {
        ll s;
        cin >> s;
        int result = BS(p, s);
        cout << result << endl;
    }

    return 0;
}
