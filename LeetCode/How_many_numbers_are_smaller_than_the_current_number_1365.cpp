#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans, b = nums;
        map<int,int> mp;
        
        for (int x : b) {
            mp[x]++;                
        }
        
        int cum = 0;
        for (auto &kv : mp) {
            int freq = kv.second;  
            kv.second = cum;     
            cum+=freq;   
        }
        
        for (int x : nums) {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};
