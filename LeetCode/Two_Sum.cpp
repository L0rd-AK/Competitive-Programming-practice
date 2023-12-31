#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mp.find(rem)!=mp.end()){
                a.push_back(i);
                a.push_back(mp[rem]);
            }
            mp[nums[i]]=i;
        }
        return a;
    }
};