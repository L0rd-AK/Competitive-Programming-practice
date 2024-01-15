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
		int n;
        cin>>n;cin.ignore();
        string s;
        cin>>s;
        int a[27]={0};
        int x=n;
        for(int i=0;i<n;i++){
            a[s[i]-'A']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(a[i]>=i+1)ans++;
        }
        cout<<ans<<'\n';
	}
	return 0;
}