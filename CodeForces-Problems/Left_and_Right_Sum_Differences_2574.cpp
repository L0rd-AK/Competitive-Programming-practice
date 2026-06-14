#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> l(n),r(n);
        l[0]=nums[0];
        r[n-1]=nums[n-1];

        for(int i=1;i<n;i++)l[i]=l[i-1]+nums[i];
        for(int i=n-2;i>=0;i--)r[i]=r[i+1]+nums[i];
        vector<int> ans(n);
        for(int i=0;i<n;i++)ans[i]=abs(l[i]-r[i]);
        return ans;
    }
};