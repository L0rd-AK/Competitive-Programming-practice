#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=nums[0];
        int l=0,r=nums.size()-1;
        while(l<=r){
            if(nums[l]<nums[r])return min(ans,nums[l]);
            int m=l+(r-l)/2;
            ans=min(nums[m],ans);
            if(nums[m]>=nums[l])l=m+1;
            else r=m-1;
        }
        return ans;
    }
};