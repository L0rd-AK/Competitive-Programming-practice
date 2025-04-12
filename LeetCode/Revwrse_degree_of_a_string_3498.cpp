#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int reverseDegree(string s) {
            int ans=0;
            int idx=1;
            for(char c:s){
                ans+=('z'-c+1)*idx;
                idx++;
            }
            return ans;
        }
    };