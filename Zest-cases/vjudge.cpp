#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));

        f(i, 0, n) f(j, 0, m) v[i][j] = 0;
        f1(i, 1, n) f1(j, 1, m) cin >> v[i][j];
        f1(i, 1, n) f1(j, 1, m) cout << v[i][j];

        f1(i, 1, n) {
            f1(j, 1, m) {
                if (v[i][j] > v[i - 1][j] && v[i][j] > v[i + 1][j] && v[i][j] > v[i][j - 1] && v[i][j] > v[i][j + 1]) {
                    if (v[i][j - 1] == 0 && v[i - 1][j] == 0)
                        v[i][j] = v[i][j + 1];
                    else if (v[i][j - 1] == 0 && v[i - 1][j] != 0)
                        v[i][j] = v[i - 1][j];
                }
            }
        }
        f1(i, 1, n) {
            f1(j, 1, m) { cout << v[i][j] << " "; }
            cout << "\n";
        }
    }

    return 0;
}
