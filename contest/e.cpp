#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int result = INT_MAX;
        for (int j = 0; j < N; j++) {
            int d = abs(j - 0);
            int s = max(d, A[j] + 1);
            result = min(result, s);
        }
        cout << result << "\n";
    }
    return 0;
}
