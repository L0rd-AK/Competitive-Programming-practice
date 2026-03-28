#include <iostream>
#include <vector>
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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            int l = 0, r = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[i])
                    l++;
                if (a[j] > a[i])
                    r++;
            }
            cout << (l > r ? l : r) << " ";
        }
        cout << "\n";
    }
}