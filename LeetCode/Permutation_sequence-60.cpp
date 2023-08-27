#include <bits/stdc++.h> 
using namespace std; 
class Solution {
public:
     string getPermutation(int n,int Nth) 
    {
        string ans="";
        Nth=Nth-1;
        long long fact=1;
        vector<long long> v;
        for(int i=1;i<n;i++){
            fact*=i;
            v.push_back(i);
        }
        v.push_back(n);
        while(1){
            long long temp=Nth/fact;
            ans+=to_string(v[temp]);
            v.erase(v.begin() + temp);
            if(v.size() == 0) break;

            Nth=Nth%fact;
            fact=fact/(v.size());
        }
        
        return ans;
    } 
};