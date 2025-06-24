#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int squreNum(int n){
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum+=(digit*digit);
            n/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> visit;
        while(visit.find(n)==visit.end()){
            visit.insert(n);
            n=squreNum(n);
            if(n==1)return true;
        }
        return false;
    }
};