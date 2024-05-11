#include <bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
	int t;
	cin>>t;
	while(t--){
	    int n;
		cin>>n;
		int a[n];
		long long int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		long long int x=sqrt(sum);
		if(x*x==sum)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
