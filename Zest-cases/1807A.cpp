#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
       #ifndef ONLINE_JUDGE
              freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
       #endif
	int t;
       cin>>t;
       while(t--){
              int a,b,c;
              cin>>a>>b>>c;

              if(a-b==c)cout<<"-\n";
              else cout<<"+\n";
       }
	return 0;
}