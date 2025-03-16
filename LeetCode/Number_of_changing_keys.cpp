#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int countKeyChanges(string s) {
            string ans="";
            for(char c:s){
                ans+=tolower(c);
            }
            int n=ans.size();
            int c=0;
            for(int i=0;i<n-1;i++){
                if(ans[i]!=ans[i+1])c++;
            }
            return c;
        }
    };