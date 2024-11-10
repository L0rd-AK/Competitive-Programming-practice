#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    vector<string> st;
    vector<string> tmp;
    while (n--) {
        string s;
        cin >> s;
        tmp.push_back(s);
    }
    reverse(tmp.begin(),tmp.end());
    for(auto i:tmp){
        if (mp[i] == 0) {
            mp[i]++;
            st.push_back(i);
        }
    }

    string ans = "";
    for (int i = 0; i < st.size(); i++) {
        string x = st[i];
        if (x.length() >= 2) {
            ans += x[x.length() - 2];
            ans += x[x.length() - 1];
        }
    }
    prnt(ans);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }



    return 0;
}
