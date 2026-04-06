#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
		map<int,int> mp;
		for(int i:friends)mp[i]++;
		for(int i:order)if(mp.count(i)>0)ans.push_back(i);
		//reverse(ans.begin(),ans.end());
		return ans;
    }
};