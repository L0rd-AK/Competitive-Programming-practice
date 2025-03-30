#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> partitionLabels(string s) {
            vector<int> ans;
            vector<int> freq(26, 0);
            for (int i = 0; i < s.size(); i++) {
                freq[s[i] - 'a'] = i;
            }
            int r = 0, l = 0;
            for (int i = 0; i < s.size(); i++) {
                r = max(r, freq[s[i] - 'a']);
                if (i == r) {
                    ans.push_back(r - l + 1);
                    l = i + 1;
                }
            }
            return ans;
        }
    };