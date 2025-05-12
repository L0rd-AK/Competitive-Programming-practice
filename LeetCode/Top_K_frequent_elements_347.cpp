#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i:nums)mp[i]++;
        vector<pair<int,int>> pr;
        auto comp = [](pair<int, int>& a, pair<int, int>& b) {
            if(a.second==b.second) return a.first > b.first;
            return a.second > b.second;
        };
        for(auto [x,y]:mp){
            pr.push_back({x,y});
        }
        sort(pr.begin(),pr.end(),comp);
        vector<int> ans;
        int z=0;
        for(auto [x,y]:pr){
            if(z>=k)break;
            ans.push_back(x);
            z++;
        }
        return ans;
    }
};