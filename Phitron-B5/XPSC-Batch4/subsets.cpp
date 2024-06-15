#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int countPartitions(vector<int>& A, int D) {
    int N = A.size();
    int S = accumulate(A.begin(), A.end(), 0);
    
    if ((S + D) % 2 != 0) return 0;
    int S1 = (S + D) / 2;
    
    if (S1 < 0 || S1 > S) return 0;
    
    vector<int> dp(S1 + 1, 0);
    // ===============================
    for(int i=0;i<=n;i++) dp[i][0]=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=amount;j++){
      if(coins[i-1]>j) {dp[i][j]=dp[i-1][j];}
      else{
        dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
      }
    }
  }return dp[n][amount];
    // ==================================
    dp[0] = 1;

    for (int num : A) {
        for (int j = S1; j >= num; --j) {
            dp[j] = (dp[j] + dp[j - num]) % MOD;
        }
    }
    
    return dp[S1];
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, D;
        cin >> N >> D;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << countPartitions(A, D) << endl;
    }
    return 0;
}
