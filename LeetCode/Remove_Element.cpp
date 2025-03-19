#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int cnt=0,n=nums.size();
            vector<int> ans;
            for(int i:nums){
                if(i==val)cnt++;
                else ans.push_back(i);
            }
            nums.clear();
            for(int i:ans)nums.push_back(i);
            return n-cnt;
        }
    };