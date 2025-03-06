#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int freq[2505]={0},mx=INT_MIN;
            for(auto i:grid){
                for(int j:i){
                    freq[j]++;
                    mx=max(mx,j);
                }
            }
            int x=0,y;
            for(int i=1;i<=mx+1;i++){
                if(freq[i]==0 && x==0)x=i;
                if(freq[i]>1)y=i;
            }
            vector<int> ans;
            ans.push_back(y);
            ans.push_back(x);
            return ans;
        }
    };