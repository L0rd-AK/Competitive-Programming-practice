#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void backtrack(vector<string>& ans,unordered_map<char, string>& digitToLetters,int idx,string str,string& digits){
            if(idx==digits.length()){ans.push_back(str);return;}
            for(char c:digitToLetters[digits[idx]]){
                backtrack(ans,digitToLetters,idx+1,str+c,digits);
            }
        }
        vector<string> letterCombinations(string digits) {
            vector<string> ans;
            unordered_map<char, string> digitToLetters = {
                {'2', "abc"},
                {'3', "def"},
                {'4', "ghi"},
                {'5', "jkl"},
                {'6', "mno"},
                {'7', "pqrs"},
                {'8', "tuv"},
                {'9', "wxyz"}
            };
            if(digits.length()!=0){
                backtrack(ans,digitToLetters,0,"",digits);
            }
            return ans;
    
        }
    };