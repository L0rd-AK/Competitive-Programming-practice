#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int finalValueAfterOperations(vector<string>& str) {
            int sum=0;
            for(string s:str){
                if(s=="++X")++sum;
                else if(s=="X++")sum++;
                else if(s=="--X")--sum;
                else sum--;
            }
            return sum;
        }
    };