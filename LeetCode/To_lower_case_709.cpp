#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string toLowerCase(string s) {
            string ans="";
            for(char c:s)ans+=tolower(c);
            return ans;
        }
    };