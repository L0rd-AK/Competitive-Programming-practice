#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int t;cin>>t;
    while(t--){
        string p, s;
        cin >> p >> s;
        int i = 0, j = 0;
        bool ok=0;
        while(i < p.size() && j < s.size()){
            if(p[i] != s[j]){
                cout << "NO\n";
                ok=1;
                break;
            }
            char c = p[i];
            i++;
            j++;
            if(j < s.size() && s[j] == c)
                j++;
        }
        if(!ok)cout << (i == p.size() && j == s.size() ? "YES\n" : "NO\n");
    }
    return 0;
}