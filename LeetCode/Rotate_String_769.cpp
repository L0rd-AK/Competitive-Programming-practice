#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
		int m=goal.length();
        if(n!=m)return false;
		string ans=s+s;
		return ans.find(goal) != string::npos;
    }
};