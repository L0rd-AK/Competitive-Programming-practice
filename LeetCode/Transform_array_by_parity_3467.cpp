#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> transformArray(vector<int>& nums) {
            vector<int> a;
            for(int i:nums){
                if(i%2==0)a.push_back(0);
                else a.push_back(1);
            }
            sort(a.begin(),a.end());
            return a;
        }
    };