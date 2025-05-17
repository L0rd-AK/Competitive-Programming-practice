#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans=0;
        for(int i:st){
            if(st.find(i-1)==st.end()){
                int x=1;
                while(st.find(i+x)!=st.end()){
                    x++;
                }
                ans=max(ans,x);
            }
        }
        return ans;
    }
};