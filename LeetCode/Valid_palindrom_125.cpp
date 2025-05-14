#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string a,b;
        for(char c:s){
            if(c>='a'&&c<='z'||c>='A'&&c<='Z'||c>='0'&&c<='9')a+=tolower(c);
        }
        b=a;
        reverse(a.begin(),a.end());
        return a==b;
    }
};