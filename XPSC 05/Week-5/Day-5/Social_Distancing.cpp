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
    int n,k;
	string s;
	cin>>n>>k>>s;
	int i=0,j=0,cnt=0,ans=0;
	bool flg=false;
	while(i<n && j<n){
		if(s[j]=='1'){
			if(!flg)ans+=(cnt/(k+1));
			else ans+=((cnt-k)/(k+1));
			i=j;
			cnt=0;
			flg=true;
		}
		else if(s[j]=='0')cnt++;
		j++;
		//cout<<ans<<" "<<cnt<<" "<<flg<<endl;
	}
	if(!flg)ans+=((cnt-1)/(k+1))+1;
	else ans+=(cnt/(k+1));

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
