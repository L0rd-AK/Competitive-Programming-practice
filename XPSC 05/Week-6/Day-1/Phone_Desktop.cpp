#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define debug(p) for(auto i:p)cout<<i<<" ";cout<<endl;

void AKG() {
    int x, y; 
	cin >> x >> y; 
	int ans = y / 2 + (y % 2 == 0? 0 : 1);
	int xn = 15 * ans;
	xn -= 4 * y;
	int v = 0;
	if(x > xn) v = (x - xn) / 15 + ((x - xn) % 15 == 0? 0 : 1);
	ans += v; 
	prnt(ans);
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
