#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            map<pair<int,int>,int> mp;
            int ans=0;
            for(auto i:dominoes){
                if(i[0]>i[1])swap(i[0],i[1]);
                ans+=mp[{i[0],i[1]}]++;
            }
            return ans;
        }
    };