#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,word;
    getline(cin,s);
    stringstream ss(s);
    bool flg=1;
    while(ss >> word){
        if(word=="Jessica"){
            cout<<"YES\n";
            flg=0;
            break;
        }
    }
    if(flg)cout<<"NO\n";
    return 0;
}
