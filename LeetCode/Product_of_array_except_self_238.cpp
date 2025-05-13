#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long ans=1,zero=0;
        bool ok=0;
        for(int i:nums){
            if(i!=0)ans*=i;
            else ok=1,zero++;
        }
        vector<int> ar;
        if(zero==nums.size() || zero>=2){
            for(int i:nums)ar.push_back(0);
            return ar;
        }
        for(int i:nums){
            if(i!=0 && ok)ar.push_back(0);
            else if(i!=0)ar.push_back(ans/i);
            else ar.push_back(ans);
        }
        return ar;
    }
};