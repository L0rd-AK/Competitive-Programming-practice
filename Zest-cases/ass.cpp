#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

// Function to calculate the best sum close to half the total sum with exactly 'k' coins
int bestSubsetSum(vector<int>& coins, int N, int k, int totalSum) {
    int targetSum = totalSum / 2; // We want to get as close as possible to half the total sum

    // DP table to store whether a specific sum with exactly j coins is possible
    vector<vector<bool>> dp(k + 1, vector<bool>(targetSum + 1, false));
    dp[0][0] = true;  // A sum of 0 is always possible with 0 coins

    // DP calculation
    for (int i = 0; i < N; ++i) {
        int coinValue = coins[i];
        for (int j = k; j > 0; --j) {  // Loop for exactly 'k' coins
            for (int s = targetSum; s >= coinValue; --s) {
                dp[j][s] = dp[j][s] || dp[j - 1][s - coinValue];
            }
        }
    }

    // Find the closest sum to targetSum
    for (int s = targetSum; s >= 0; --s) {
        if (dp[k][s]) {
            return s;
        }
    }

    return 0;
}

int minDifference(vector<int>& coins, int N) {
    int totalSum = accumulate(coins.begin(), coins.end(), 0);  // Total sum of coins

    int halfSize = N / 2;
    int bestSum1 = bestSubsetSum(coins, N, halfSize, totalSum);

    if (N % 2 == 0) {
        // If N is even, both subsets have N/2 coins
        return abs(totalSum - 2 * bestSum1);
    } else {
        // If N is odd, find the best sum with N/2 coins and (N/2) + 1 coins
        int bestSum2 = bestSubsetSum(coins, N, halfSize + 1, totalSum);
        return min(abs(totalSum - 2 * bestSum1), abs(totalSum - 2 * bestSum2));
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> coins(N);
        for (int i = 0; i < N; ++i) {
            cin >> coins[i];
        }

        cout << minDifference(coins, N) << endl;
    }

    return 0;
}
