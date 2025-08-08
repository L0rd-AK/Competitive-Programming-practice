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


    class Solution {
public:
    int mostWordsFound(vector<string>& s) {
    return 1 + accumulate(begin(s), end(s), 0, [](int res, const auto &s) {
        return max(res, (int)count(begin(s), end(s), ' ')); });
}
};