#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector <int> v;
        for(auto i:matrix){
            for(auto j:i)v.push_back(j);
        }
        int l=0,r=v.size()-1;
        while(l<=r){
            int x=l+(r-l)/2;
            if(v[x]==target)return 1;
            else if(v[x]<target)l=x+1;
            else r=x-1;
        }
        return 0;
    }
};