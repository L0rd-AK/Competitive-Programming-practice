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
       string s,ans="";
       cin>>s;
       for(int i=0;i<s.length();i++){
            if(s[i]=='b'){
                for(int j=ans.length()-1;j>=0;j--){
                    if(ans[j]>='A' and ans[j]<='Z') continue;
                    else {
                        if(j==0)ans.erase(j,1);
                        else ans.erase(j,1);
                        break;
                    }
                }
            }else if(s[i]=='B'){
                for(int j=ans.length()-1;j>=0;j--){
                    if(ans[j]>='a' and ans[j]<='z') continue;
                    else {
                       if(j==0)ans.erase(j,1);
                        else ans.erase(j,1);
                        break;
                    }
                }
            }else ans+=s[i];
       }
       cout<<ans<<endl;
    }
}
