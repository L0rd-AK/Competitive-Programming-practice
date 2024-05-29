#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int ans=1;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==' ' and s[i+1]>='a' and s[i+1]<='z')ans++;
        if(s[i]==' ' and s[i+1]>='A' and s[i+1]<='Z')ans++;
    }
    cout<<ans<<endl;
    return 0;
}
