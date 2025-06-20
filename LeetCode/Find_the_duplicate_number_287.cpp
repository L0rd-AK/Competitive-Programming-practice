#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i:nums){
            int x=abs(i)-1;
            if(nums[x]<0)return abs(i);
            nums[x]*=-1;
        }
        return -1;
    }
};