#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++) {
            vp.push_back({position[i], speed[i]});
        }

        sort(vp.begin(), vp.end());
        vector<double> st;

        for (int i = n - 1; i >= 0; i--) {
            double time = (double)(target - vp[i].first) / vp[i].second;
            st.push_back(time);

            if (st.size() >= 2 && st[st.size() - 1] <= st[st.size() - 2]) {
                st.pop_back(); 
            }
        }

        return st.size(); 
    }
};
