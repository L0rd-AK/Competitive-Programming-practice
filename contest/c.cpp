#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "Yes\n" : cout << "No\n"
#define prnt(x) cout << x << endl

bool isComposite(int num) { 
    if (num <= 1) return false; 
    if (num % 2 == 0 && num > 2) return true; 
    for (int i = 3; i * i <= num; i += 2) { 
        if (num % i == 0) return true; 
    } 
    return false; 
}

void AKG() { 
    int n;
    cin >> n;
    if (n == 3) {
        cout << -1 << endl;
        return;
    }

    vector<int> evn, od, ans;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evn.push_back(i);
        } else {
            od.push_back(i);
        }
    }

    for (int x : evn) ans.push_back(x);
    for (int x : od) ans.push_back(x);

    if (!isComposite(ans[evn.size() - 1] + ans[evn.size()])) {
        int i = evn.size(), x = evn.size() - 1;
        bool flg = false;
        while (i < ans.size()) {
            if (isComposite(ans[x] + ans[i])) {
                swap(ans[x + 1], ans[i]);
                flg = true;
                break;
            }
            i++;
        }

        if (!flg) {
            cout << -1 << endl;
            return;
        }
    }

    for (int i : ans) cout << i << " ";
    cout << endl;
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
