#include <bits/stdc++.h>
using namespace std;

int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    long long int l=0,r=0,res=0,total=0;
    while (r<nums.size())
    {
       total+=nums[r];
       while((nums[r]*(r-l+1))>total+k){
        total-=nums[l];
        l++;
       }
       res=max(res,(r-l+1));r++;
    }
    
    return res;
}