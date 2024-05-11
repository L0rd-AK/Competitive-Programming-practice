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
        int ans=0,four=4,c=0;
		while(four--){
            int a,b,x,y;
            cin>>a>>b;
            if(c==0){x=a;y=b;c++;}
            if(c>0){
                if(x==a)ans=abs(b-y);
            }
        }
        cout<<ans*ans<<'\n';
	}
	return 0;
}