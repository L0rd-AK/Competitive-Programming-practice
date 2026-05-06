#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> ans;
        
        for (const string& qu : queries) {
            for (const string& dk : dictionary) {
                int c = 0;
                for (int i = 0; i < qu.length(); ++i) {
                    if(qu[i]!=dk[i])c++;
                    if(c>2) break; 
                }
                
                if(c<=2){
                    ans.push_back(qu);
                    break; 
                }
            }
        }
        
        return ans;
    }
};