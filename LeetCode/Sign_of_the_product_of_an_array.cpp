#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    
        int arraySign(vector<int>& nums) {
            int pos=0,neg=0,zero=0;
            for(int n:nums){
                if(n>0)pos++;
                else if(n<0)neg++;
                else zero++;
            }
            if(zero)return 0;
            else if(neg%2==1)return -1;
            return 1;
        }
    };