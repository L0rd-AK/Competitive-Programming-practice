#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ')continue;
            else{
                while(i>=0){
                    if(s[i]!=' ')ans++,i--;
                    else break;
                }
                break;
            }
        }
        return ans;
    }
};