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
    ll n,k;
    cin >> n >> k;
        bool flg=1;
        vector<ll> a;
        ll temp1=0;
        ll temp2=0;
        for(int i=0; i<k; i++) {
            int x;
        	cin >> x;
        	a.push_back(x);
        	if(i==1) {
        		temp1=a[1]-a[0];
        		if(temp1*(n-k+1)<a[0]){
                    flg=0;
                }
			}
            if(i>1) {
                temp2=a[i]-a[i-1];
                if(temp2<temp1){
                    flg=0;
                }
                temp1=temp2;
            }
		}
        yn(flg);
    
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
