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

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Floyd's Tortoise and Hare
        int tortoise = nums[0];
        int hare = nums[0];

        // 1) Find intersection point
        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        // 2) Find entrance to the cycle (the duplicate)
        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return tortoise; // the duplicate value
    }
};
