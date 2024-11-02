#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void func(vector<int>& str, string& s, int a, int len) {
    for (int i = max(0, a - 3); i <= min(len - 4, a); i++) {
        if (s.substr(i, 4) == "1100") {
            if (find(str.begin(), str.end(), i) == str.end()) {
                str.push_back(i);
            }
        } else {
            auto it = find(str.begin(), str.end(), i);
            if (it != str.end()) {
                str.erase(it);
            }
        }
    }
}

void AKG() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    int len = s.length();

    vector<int> str;

    for (int i = 0; i <= len - 4; i++) {
        if (s.substr(i, 4) == "1100") {
            str.push_back(i);
        }
    }

    while (n--) {
        int a;
        cin >> a;
        a--;
        char c;
        cin >> c;

        if (len < 4) {
            yn(0);
            continue;
        }

        s[a] = c;
        func(str, s, a, len);

        yn(!str.empty());
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    // auto begin = chrono::high_resolution_clock::now();
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
