#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        for (int d = 2; d <= 9; ++d) {
            long long p = 1;
            while (p <= n) {
                // Use long long for calculations involving large numbers
                sum += d * min((long long)n - p + 1, (long long)p / d);
                p *= d;
               //  cout<<p<<endl;
            }
        }

        cout << sum-10 << endl;
    }

    return 0;
}
