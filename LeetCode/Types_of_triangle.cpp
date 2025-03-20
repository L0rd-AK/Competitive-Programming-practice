#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string triangleType(vector<int>& nums) {
            if (nums[0] + nums[1] > nums[2] && nums[1] + nums[2] > nums[0] && nums[0] + nums[2] > nums[1]) {
                sort(nums.begin(),nums.end());
                if(nums[0]!=nums[1] && nums[1]!=nums[2]) return "scalene";
                else if(nums[0] == nums[1] && nums[0] != nums[2] || nums[0] != nums[1] && nums[1] == nums[2] || nums[0] == nums[2] && nums[1] != nums[2]) return "isosceles";
                else return "equilateral";
            }
            else{
                return "none";
            }
            
            return "none";
        }
    };