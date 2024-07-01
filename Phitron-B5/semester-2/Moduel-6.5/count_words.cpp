#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int ans=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]>='a' and s[i]<='z' or s[i]>='A' and s[i]<='Z' ){
            if(s[i+1]>='A' and s[i+1]<='Z' or s[i+1]>='a' and s[i+1]<='z'){}
            else ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
