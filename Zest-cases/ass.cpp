#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl

bool valid(const vector<vector<int>>& pref, int l, int r, int k) {
    int odd = 0;
    for (int i = 0; i < 26; ++i) {
        int freq = pref[r + 1][i] - pref[l][i];  
        if (freq % 2 != 0) {
            odd++; 
        }
    }
    return (odd / 2) <= k;
}

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        string s;
        int n, q;
        cin>>n>>s>>q;
        vector<vector<int>> pref(n + 1, vector<int>(26, 0));
        for (int i = 0; i < n; ++i) {
            pref[i + 1] = pref[i];  
            pref[i + 1][s[i] - 'a']++; 
        }
        while (q--) {
            int l,r,k;
            cin>>l>>r>>k;
            l--; r--;
            if (valid(pref, l, r, k)) yes;
            else no;
            
        }
    return 0;
}
