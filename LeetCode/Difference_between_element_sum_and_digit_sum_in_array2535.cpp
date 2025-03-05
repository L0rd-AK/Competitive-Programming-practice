#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int differenceOfSum(vector<int>& nums) {
            int sum1=accumulate(nums.begin(), nums.end(), 0);
            int sum2=0;
            for(int x:nums){
                while(x!=0){
                    int z=x%10;
                    sum2+=z;
                    x/=10;
                }
            }
            return sum1-sum2;
        }
    };