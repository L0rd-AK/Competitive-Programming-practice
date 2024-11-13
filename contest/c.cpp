#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() { 
    int a, b;
    cin >> a >> b;
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2) {
        yn(1);
        return;
    }

    int a1 = count(s1.begin(), s1.end(), 'a');
    int a2 = count(s2.begin(), s2.end(), 'a');

    string t1 = "", t2 = "";
    for (char c : s1) {
        if (c == 'a') break;
        t1 += c;
    }
    for (char c : s2) {
        if (c == 'a') break;
        t2 += c;
    }

    yn(a1 == a2 && t1 == t2 && a1 != 0);
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
