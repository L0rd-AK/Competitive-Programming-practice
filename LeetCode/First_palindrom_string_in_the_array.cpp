#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool zzz(string& s){
            string x=s;
            reverse(s.begin(),s.end());
            return x==s;
        }
        string firstPalindrome(vector<string>& words) {
            for(auto s:words){
                if(zzz(s))return s;
            }
            return "";
        }
    };