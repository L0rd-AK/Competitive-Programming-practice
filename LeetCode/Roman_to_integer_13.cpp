#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int romanToInt(string s) {
            int ans=0;
            unordered_map <char,int> mp{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]<mp[s[i+1]]){
                ans=ans-mp[s[i]];
            }else{
                ans=ans+mp[s[i]];
            }
        }
            return ans;
        }
    };

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I',1}, {'V',5}, {'X',10}, {'L',50},
            {'C',100}, {'D',500}, {'M',1000}
        };
        
        int result = 0;
        for (int i = 0; i < s.size(); ++i) {
            int curr = roman[s[i]];
            int next = (i+1 < s.size()) ? roman[s[i+1]] : 0;
            
            if (curr < next) {
                result -= curr;
            } else {
                result += curr;
            }
        }
        return result;
    }
};