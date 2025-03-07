#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maximumWealth(vector<vector<int>>& v) {
            int mx=INT_MIN;
            for(auto i:v){
                int ans=0;
                for(int j:i){
                    ans+=j;
                }
                mx=max(mx,ans);
            }
            return mx;
        }
    };