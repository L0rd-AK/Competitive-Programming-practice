#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bitset<1005> b;
        while (n--)
        {
            int x;
            cin >> x;
            b.set(x);
        }
        int c = b.count();
        while (!b.test(c))
            b.set(c++);
        cout << c << "\n";
    }
}