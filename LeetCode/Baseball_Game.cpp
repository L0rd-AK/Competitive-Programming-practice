#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
            int calPoints(vector<string>& ops) {
            vector<int> ans;
            int idx=0;
            
            for(string str : ops){
                if(isdigit(str[0]) || str[0] == '-'){
                    ans.push_back(std::stoi(str));
                }
                else if(str[0] == '+'){
                    ans.push_back(ans[idx]+ans[idx-1]);
                }
                else if(str[0] == 'D'){
                    ans.push_back(2*ans[idx]);
                }
                else if(str[0] == 'C'){
                    ans.pop_back();
                }
                
                idx = ans.size()-1;
            }
            
            return accumulate(ans.begin(), ans.end(),0);
        }
    };