#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(),ans=0,tmp=0,c=0;
        for(int i=0;i<n;i++)if(nums[i]==1)c++;
        for(int i=1;i<n;i++){
            if(nums[i]==1 and nums[i]==nums[i-1])tmp++;
            else {ans=max(ans,tmp);tmp=0;}
        }
        ans=max(ans,tmp);
        if(c==1) return 1;
        else if(c==0)return 0;
        else return ans+1;
    }
};