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
    string s;
    cin >> s;

    string result = "";
    for (int i = n - 1; i >= 0; ) {
        if (s[i] == '0') {
            int x = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
            result += (char)('a' + x - 1);
            i -= 3;
        } else {
            int x = s[i] - '0';
            result += (char)('a' + x - 1);
            i--;
        }
    }

    reverse(result.begin(), result.end());
    cout << result << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
