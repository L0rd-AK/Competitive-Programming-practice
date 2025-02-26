#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int firstUniqChar(string s) {
            int n=s.length();
            vector<int>a(26,0);
            for(char c:s)a[c-'a']++;
            for(int i=0;i<n;i++){
                if(a[s[i]-'a']==1)return i;
            }
            return -1;
        }
    };