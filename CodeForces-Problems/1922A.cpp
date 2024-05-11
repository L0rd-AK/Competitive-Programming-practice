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
              cin>>n;
              string a,b,c;
              cin>>a>>b>>c;
              int ans=0;
              for(int i=0;i<n;i++){
                  if(a[i]!=c[i] and b[i]!=c[i])ans=1;
              }
              if(ans)cout<<"YES\n";
              else cout<<"NO\n";
	}
	return 0;
}