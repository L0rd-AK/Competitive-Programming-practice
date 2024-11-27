#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
    int n;
        cin >> n;
        vector<int> B(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> B[i];
        }
        sort(B.begin(), B.end());
        vector<int> A(n);
        A[0] = 1;
        for (int i = 1; i < n; i++) {
            A[i] = B[i - 1] - A[i - 1];
        }

        for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
        }
        
        cout << endl;
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
