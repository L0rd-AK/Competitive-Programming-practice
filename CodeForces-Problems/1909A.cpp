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
              int n,x,y,a=0,b=0,c=0,d=0;
              cin>>n;
              while(n--){
                     cin>>x>>y;
                     if(x<0)a=1;
                     if(x>0)b=1;
                     if(y>0)c=1;
                     if(y<0)d=1;
              }
              if(a==1 && b==1 && c==1 && d==1)cout<<"NO\n";
              else cout<<"YES\n";
	}
	return 0;
}