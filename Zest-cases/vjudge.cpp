#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout<<x<<endl

void AKG() {
    int n;
    cin >> n;
    vector<int> b(n);
    f(i, 0, n) cin >> b[i];

    int q;
    cin >> q;
    
    while (q--) {
        string s;
        cin >> s;
        int l = s.length();

        if (l != n) {
            yn(0);
            continue;
        }
        bool ok = true;
        map<int,char> ci;
        map<char,int> ic;
        f(i,0,n){
            if(ci.count(b[i])==0)ci[b[i]]=s[i];
            if(ic.count(s[i])==0)ic[s[i]]=b[i];

            if(ci[b[i]]!=s[i] || ic[s[i]]!=b[i])ok=0;
        }
        yn(ok);
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        AKG();
    }

#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
#endif

    return 0;
}
