#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isprime(int n){
        if(n==1)return false;
        int c=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                c++;
                if(i!=(n/i))c++;
            }
            if(c>=2)break;
        }
        return c==0;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto [x,y]:mp){
            if(isprime(y))return true;
        }
        return false;
    }
};