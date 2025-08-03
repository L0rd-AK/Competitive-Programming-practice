#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            s += (v[i] ? v[i] : 1);
        }
        cout << s << "\n";
    }
    return 0;
}