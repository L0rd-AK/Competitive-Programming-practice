#include <bits/stdc++.h>
using namespace std; 
#define ll long long int
int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       for(int i=1;i<=8;i++){
        if(i!=s[1]-'0')cout<<s[0]<<i<<'\n';
       }
       for(char c='a';c<='h';c++){
        if(c!=s[0])cout<<c<<s[1]<<'\n';
       }
    }
}
