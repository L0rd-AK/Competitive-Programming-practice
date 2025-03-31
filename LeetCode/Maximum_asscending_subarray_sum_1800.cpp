#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int maxAscendingSum(vector<int>& nums) {
            int mx = nums[0], sum = nums[0], n = nums.size();
            
            for(int i = 1; i < n; i++) {
                if(nums[i] > nums[i - 1]) {
                    sum += nums[i];
                } else {
                    sum = nums[i]; 
                }
                mx = max(mx, sum);
            }
            
            return mx;
        }
    };
    