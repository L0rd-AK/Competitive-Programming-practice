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
       int n=s.length();
       stack<int> lower,upper;
       for(int i=0;i<n;i++){
            if(s[i]=='b'){
                s[i]=' ';
                if(!lower.empty()){
                    int j=lower.top();
                    s[j]=' ';
                    lower.pop();
                }
            }else if(s[i]=='B'){
                s[i]=' ';
                if(!upper.empty()){
                    int j=upper.top();
                    s[j]=' ';
                    upper.pop();
                }
            }else if(s[i]>='a' and s[i]<='z'){
                lower.push(i);
            }else if(s[i]>='A' and s[i]<='Z'){
                upper.push(i);
            }
       }
       for(int i=0;i<n;i++)if(s[i]!=' ')cout<<s[i];
       cout<<endl;
    }
}
