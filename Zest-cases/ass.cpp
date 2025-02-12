#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A(N), B(M);
        for (int &x : A) cin >> x;
        for (int &x : B) cin >> x;

        // Generate B_min
        int min_val = B[0], min_idx = 0;
        for (int i = 1; i < M; ++i) {
            if (B[i] < min_val) {
                min_val = B[i];
                min_idx = i;
            }
        }
        vector<int> B_min(M);
        for (int i = 0; i < M; ++i) {
            B_min[i] = B[(min_idx + i) % M];
        }

        // Concatenate B_min and A to form S
        vector<int> S = B_min;
        S.insert(S.end(), A.begin(), A.end());
        int lenS = S.size();
        vector<int> Z(lenS, 0);

        // Compute Z-array
        int l = 0, r = 0;
        for (int i = 1; i < lenS; ++i) {
            if (i > r) {
                l = r = i;
                while (r < lenS && S[r - l] == S[r]) ++r;
                Z[i] = r - l;
                --r;
            } else {
                int k = i - l;
                if (Z[k] < r - i + 1) {
                    Z[i] = Z[k];
                } else {
                    l = i;
                    while (r < lenS && S[r - l] == S[r]) ++r;
                    Z[i] = r - l;
                    --r;
                }
            }
        }

        // Find the earliest position i to replace
        int earliest = -1;
        for (int i = 0; i <= N - M; ++i) {
            int common = Z[M + i];
            if (common == M) continue;
            if (common < M && B_min[common] < A[i + common]) {
                earliest = i;
                break;
            }
        }

        // Replace from earliest onwards if found
        if (earliest != -1) {
            for (int k = earliest; k < N; ++k) {
                A[k] = B_min[(k - earliest) % M];
            }
        }

        // Output the result
        for (int x : A) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}