#include <bits/stdc++.h>
using namespace std;

// time complexity: O(n^2)
// space complexity: O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        for (int i = 0; i < prices.size(); i++) {
            int buy = prices[i];
            for (int j = i + 1; j < prices.size(); j++) {
                int sell = prices[j];
                res = max(res, sell - buy);
            }
        }
        return res;
    }
};
// time complexity: O(n)
// space complexity: O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minBuy = prices[0];

        for (int& sell : prices) {
            maxP = max(maxP, sell - minBuy);
            minBuy = min(minBuy, sell);
        }
        return maxP;
    }
};