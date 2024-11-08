#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n, m, q; cin >> n >> m >> q;

	vector<int> a(m);
	for (int i = 0; i < m; i++) cin >> a[i];
	sort(a.begin(), a.end());

	for (int i = 1; i <= q; i++) {
		int b; cin >> b;
		int k = upper_bound(a.begin(), a.end(), b) - a.begin();

		if (k == 0) cout << a[0] - 1 << ' ';   
		else if (k == m) cout << n - a[m - 1] << ' '; 
		else cout << (a[k] - a[k - 1]) / 2 << ' ';    
	}
	cout<<endl;  
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
        auto begin = chrono::high_resolution_clock::now();
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    #ifndef ONLINE_JUDGE
        auto end = chrono::high_resolution_clock::now();
        auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
        cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;
}
