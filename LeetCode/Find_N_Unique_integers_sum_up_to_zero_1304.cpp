#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==1)return {0};
        if(n==2)return {-1,1};
        if(n==3)return {-1,-2,3};
        vector<int> ans={-1,-2,3};
        if(n%2==0){
            ans.clear();
            for(int i=0;i<(n/2);i++){
                ans.push_back(n-i);
                ans.push_back((n-i)*-1);
            }
        }else
        for(int i=0;i<(n-3)/2;i++){
                ans.push_back(n-i);
                ans.push_back((n-i)*-1);
        }
        return ans;
    }
};