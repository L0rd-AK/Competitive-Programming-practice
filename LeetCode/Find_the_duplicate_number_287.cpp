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

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums){
            if(mp.count(i)>0)return i;
            mp[i]++;
        }
        return 0;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i : nums) {
            if (++mp[i] > 1) return i;
        }
        return -1; 
    }
};
