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
       int sum1=0,sum2=0;
       while(t--){
              int a,b;
              cin>>a>>b;
              sum1+=a;
              sum2+=b;
       }
       if(sum1>sum2)cout<<"Takahashi\n";
       else if(sum2>sum1)cout<<"Aoki\n";
       else cout<<"Draw\n";
	return 0;
}