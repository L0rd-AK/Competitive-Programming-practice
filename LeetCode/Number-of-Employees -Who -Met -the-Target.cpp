#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
            int ans=0;
            for(int i:hours){
                if(i>=target)ans++;
            }
            return ans;
        }
    };