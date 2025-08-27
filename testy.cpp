#include <iostream>
using namespace std;
int main()
{
    int n, m = 0, k, i = 1, c, a[2002];
    for (cin >> n; i <= n;)
        cin >> a[i++];
    for (i = 1; i <= n;)
    {
        k = a[i++], c = 0;
        while (k > 0)
            k = a[k], c++;
        m = c > m ? c : m;
    }
    cout << m + 1;
}