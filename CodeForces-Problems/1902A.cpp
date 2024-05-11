#include <bits/stdc++.h>
using namespace std; 

int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
    int t;
    cin>>t;
    while(t--){
       string s;int n,zero=0,one=0;
       cin>>n;cin.ignore();
       cin>>s;
       for(int i=0;i<n;i++){
        if(s[i]=='0')zero++;
        else one++;
       }
       if(zero>0)cout<<"YES\n";
       else cout<<"NO\n";
       
    }
}
