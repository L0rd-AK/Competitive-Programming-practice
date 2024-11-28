#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define debug(p) for(auto i:p)cout<<i<<" ";cout<<endl;

int findMinimumXOR(vector<int>& nums) {
	int n = nums.size();
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		ans ^= nums[i];
	}
	if(ans==0)return 0;
	else if(n%2)return ans;
	else return -1;
}
void AKG() {
    int n;cin>>n;
	vector<int> v(n);
	f(i,0,n)cin>>v[i];
	cout<<findMinimumXOR(v)<<endl;
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
