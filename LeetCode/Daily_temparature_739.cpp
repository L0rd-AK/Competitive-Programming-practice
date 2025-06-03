#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0); 
        stack<pair<int, int>> st;
        
        for(int i = 0; i < n; i++) {
            int tmp = temperatures[i];
            while(!st.empty() && st.top().first < tmp) {
                auto x = st.top();
                st.pop();
                ans[x.second] = i - x.second;
            }
            st.push({tmp, i});
        }
        return ans;
    }
};