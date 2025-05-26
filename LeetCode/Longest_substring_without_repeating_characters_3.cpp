#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1); // Store last index of characters
        int start = 0, maxLen = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (last[s[i]] >= start) {
                start = last[s[i]] + 1;
            }
            last[s[i]] = i;
            maxLen = max(maxLen, i - start + 1);
        }
        
        return maxLen;
    }
};
