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
    int k,n;cin>>n>>k;
    vector<int> a;
    map<int,int> mp;
    f(i,0,n){
        int x;cin>>x;
        mp[x]++;
        if(mp[x]==k)a.push_back(x);
    }
    if(a.size() == 0)
	{
		cout << -1 << endl;
		return;
	}
    sort(all(a));
    int sz=a.size();
    int mx = 0;
	int l = a[0], r = a[0];
	for(int i = 1; i < a.size(); i++)
	{
		if(a[i]-1 == a[i-1])
		{
			if(a[i]-l > mx)
			{
				l = l;
				r = a[i];
				mx = a[i]-l;
			}
		}
		else
		{
			l = a[i];
		}
	}
	cout << l << " " << r << endl;

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
