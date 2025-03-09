
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool canAliceWin(vector<int>& nums) {
            int a=0,b=0;
            for(int i:nums){
                if(i>9)a+=i;
                else b+=i;
            }
            return (a!=b);
        }
    };