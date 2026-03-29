#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i=0;i<4;i++){
            if(s1[i]==s2[i]) continue;
            else{
                if(i==0 && s1[2]==s2[0]) swap(s1[0], s1[2]);
                if(i==1 && s1[3]==s2[1]) swap(s1[1], s1[3]);
                if(i==2 && s1[0]==s2[2]) swap(s1[2], s1[0]);
                if(i==3 && s1[1]==s2[3]) swap(s1[3], s1[1]);
            }
        }
        return s1==s2;
    }
};