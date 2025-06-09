#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=1;
        int l=1,r=*max_element(piles.begin(), piles.end());
        while(l<=r){
            int k=l+(r-l)/2;
            long long sum=0;
            for(int i:piles){
                sum+=(i+k-1)/k;
            }
            if(sum<=h)ans=k,r=k-1;
            else l=k+1;
        }
        return ans;
    }
};