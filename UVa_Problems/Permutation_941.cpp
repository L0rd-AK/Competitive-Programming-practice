#include <bits/stdc++.h> 
using namespace std; 
#define ll long long

string s; 

string permute(int n,ll Nth) 
{
	string ans="";
	Nth=Nth-1;
	ll fact=1;
	for(int i=2;i<n;i++) fact*=i;
	
	while(1){
		ll temp=Nth/fact;
		ans+=s[temp];
		s.erase(s.begin() + temp);
		if(s.size() == 0) break;
		Nth=Nth%fact;
		fact=fact/(s.size());
	}
	
	return ans;
} 


int main() 
{ 
    //freopen("input.txt","r",stdin);
    int t;cin>>t;
    while(t--){
        cin>>s;
        int n = s.length();
		sort(s.begin(),s.end());
        ll Nth;cin>>Nth; 
	    cout<<permute(n,Nth+1)<<endl;
    } 
	return 0; 
} 