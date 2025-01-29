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
	    int n;
		cin>>n;cin.ignore();
		string s,ans;
		cin>>s;
		for(int i=n-1;i>=0;){
			if(isVowel(s[i])){
				ans+=s[i];
				ans+=s[i-1];
				ans+='.';
				i-=2;
			}else{
				ans+=s[i];
				ans+=s[i-1];
				ans+=s[i-2];
				ans+='.';
				i-=3;
			}
		}
		reverse(ans.begin(),ans.end());
		for(int i=1;i<ans.length();i++)cout<<ans[i];
		cout<<'\n';
	}
	return 0;
}