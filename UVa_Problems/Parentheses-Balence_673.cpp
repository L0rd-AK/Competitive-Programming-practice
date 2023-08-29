#include <bits/stdc++.h>
#include <vector>
#define ll long long int 
using namespace std;
#define MOD 1000000007
int main(){
    ll t,index=1;
    cin>>t;cin.ignore();
    while(t--){        string s;stack<char> a;
        getline(cin,s);
        if(s.length()%2==1) {cout<<"No"<<endl;continue;}
        for(ll i=0;i<s.length();i++){
            if(s[i]=='(' or s[i]=='[') a.push(s[i]);
            else if(!a.empty() and s[i]==')' and a.top()=='(') a.pop();
            else if(!a.empty() and s[i]==']' and a.top()=='[') a.pop();
            else a.push(s[i]);
        }
        if(a.empty()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
     

   return 0;
}