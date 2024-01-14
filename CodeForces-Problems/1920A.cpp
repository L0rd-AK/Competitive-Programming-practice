#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
	freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		ll n,ans=0,mn=INT_MAX,mx=INT_MIN;
		cin>>n;
		vector<ll> v;
		while(n--){
			ll a,x;
			cin>>a>>x;
			if(a==1 and x>mx)mx=x;
			else if(a==2 and x<mn)mn=x;
			else if(a==3){
				v.push_back(x);
			}
		}
		if(mx>mn){
			cout<<0<<endl;
			continue;
		}
		int c=0;
		ll s=min(mx,mn),ss=max(mx,mn);
		for(int i=0;i<v.size();i++){
			if(v[i]>=s and v[i]<=ss)c++;
		}
		//cout<<mx<<" "<<mn<<" "<<c<<endl;
		cout<<(abs(mx-mn)+1-c)<<endl;
	}
	return 0;
}
