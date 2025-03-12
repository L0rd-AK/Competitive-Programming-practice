#include <iostream>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    
    int T;
    cin >> T;
    while (T--) {
        ll N;
        cin >> N;
        ll m = N / 2;
        ll term1 = N * m * (m + 1) / 2;
        ll term2 = -(m * (m + 1) * (2 * m + 1)) / 6;
        ll term3 = m + 1;
        ll sum = term1 + term2 + term3;
        cout << sum << '\n';
    }
    return 0;
}