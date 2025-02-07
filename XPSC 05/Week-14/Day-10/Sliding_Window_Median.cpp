#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<int, int>

#ifdef LOCAL
#include "D:\VS-Code\Competitive programming practice\Zest-cases\dbg.h"
#else
#define dbg(x...) 
#endif
#define N 200005
multiset<long> r;
multiset<long> l;

void ins(ll val, ll k) {       
	ll a = *l.rbegin();  
	if (a < val) {
		r.insert(val);
		if (r.size() > k / 2) {
			l.insert(*r.begin());
			r.erase(r.begin());
		}
	} else {
		l.insert(val);
		if (l.size() > (k + 1) / 2) {
			r.insert(*l.rbegin());
			l.erase(--l.end());
		}
	}
}

void er(ll val) { 
	if (r.find(val) != r.end()) r.erase(r.find(val));
	else l.erase(l.find(val));
	if (l.empty()) {
		l.insert(*r.begin());
		r.erase(r.begin());
	}
}
void AKG() {
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    f(i,0,n) cin>>a[i];
    if(k==1){
        f(i,0,n) cout<<a[i]<<" ";
        cout<<endl;
        return;
    }else if(k==2){
        f(i,1,n) cout<<min(a[i],a[i-1])<<" ";
        cout<<endl;
        return;
    }
    else{
        l.insert(a[0]);
        f(i,1,k)ins(a[i],k);
        cout << *l.rbegin() << " ";
        f(i,k,n){
            er(a[i-k]);
            ins(a[i],k);
            cout << *l.rbegin() << " ";
        }
    }
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while (t--){
        AKG();
    }

    return 0;
}
