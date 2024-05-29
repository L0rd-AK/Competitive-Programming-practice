#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='E' and s[i+1]=='G' and s[i+2]=='Y' and s[i+3]=='P' and s[i+4]=='T'){cout<<" ";i+=4;}
        else cout<<s[i];
    }

    return 0;
}
