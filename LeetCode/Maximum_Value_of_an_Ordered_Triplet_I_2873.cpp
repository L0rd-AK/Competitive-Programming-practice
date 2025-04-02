#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long mx = LLONG_MIN;
        
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                for (int k = j+1; k < n; k++) {
                    long long val = ((long long)nums[i] - (long long)nums[j]) * (long long) nums[k];
                    mx = max(mx, val);
                }
            }
        }
        if(mx<0)return 0;
        else return mx;
    }
};