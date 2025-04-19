#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int target_low = lower - nums[i];
            int target_high = upper - nums[i];
            auto left = lower_bound(nums.begin() + i + 1, nums.end(), target_low);
            auto right = upper_bound(nums.begin() + i + 1, nums.end(), target_high);
            ans += right - left;
        }
        return ans;
    }
};