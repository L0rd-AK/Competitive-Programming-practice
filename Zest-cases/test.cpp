#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c){
	if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u') return true;

	return false;
}
int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
	int t;
	cin>>t;
	while(t--){
	    long long int a,b;
		cin>>a>>b;
		long long int x=a*b/__gcd(a,b);
		if(b%a==0)cout<<x*(b/a)<<endl;
		else cout<<x<<endl;
		
	}
	return 0;
}
