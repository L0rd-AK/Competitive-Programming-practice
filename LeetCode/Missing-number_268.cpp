#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        bool a[n+1];
        for(int i=0;i<=n;i++)a[i]=0;
        for(int i=0;i<n;i++){
            a[nums[i]]=1;
        }
        int ans=0;
        for(int i=0;i<=n;i++){
            if(!a[i])ans=i;
        }
        return ans;
    }
};