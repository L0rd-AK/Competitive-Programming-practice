#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool checkIfPangram(string s) {
            int n=s.length();
            map<char,int> mp;
            for(auto c:s){
                mp[c]++;
            }
            return mp.size()==26;
        }
    };