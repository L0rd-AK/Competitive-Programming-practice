#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int mostWordsFound(vector<string>& sentences) {
            int ans=-1;
            for(auto s:sentences){
                int cnt=0;
                for(auto c:s)if(c==' ')cnt++;
                if(cnt>ans)ans=cnt;
            }
            return ans+1;
        }
    };