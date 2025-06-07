#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            int x=l+(r-l)/2;
            if(nums[x]==target)return x;
            else if(nums[x]<target)l=x+1;
            else r=x-1;
        }
        return -1;
    }
};