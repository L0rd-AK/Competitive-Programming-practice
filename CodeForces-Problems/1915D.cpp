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
	    long long int n,k,x=0,ans=1;
		cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>x;
            ans*=x;
        }
		if(2023%ans==0){
            cout<<"YES\n";
            cout<<2023/ans;
            for(int i=1;i<k;i++)cout<<" 1";
            cout<<endl;
        }else cout<<"NO\n";
	}
	return 0;
}
