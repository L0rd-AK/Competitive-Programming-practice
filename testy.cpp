#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mn1 = (1e9), mn2 = (1e9), m;
        long long sum = 0;
        while (n--)
        {
            cin >> m;
            int a[m];
            for (int i = 0; i < m; i++)
            {
                cin >> a[i];
            }
            sort(a, a + m);
            sum += a[1];
            if (mn1 > a[0])
                mn1 = a[0];
            if (mn2 > a[1])
                mn2 = a[1];
        }
        cout << sum - mn2 + mn1 << endl;
    }
}