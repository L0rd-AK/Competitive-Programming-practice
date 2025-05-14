#include <bits/stdc++.h>
using namespace std;
int n, k, a[100005];
main()
{
    cin >> n;
    while (cin >> n >> k)
    {
        int64_t b = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i], b += a[i];
        sort(a, a + n--), 
        cout << ((max(a[n] - 1, a[n - 1]) - a[0] > k) ? "Jerry" : (b & 1) ? "Tom"
                                                                                            : "Jerry")
                               << '\n';
    }
}