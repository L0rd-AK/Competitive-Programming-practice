#include <bits/stdc++.h>
using namespace std;

// time complexity: O(n) space complexity: O(n)
// suffex, prefix array approach
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n),right(n);
        left[0]=height[0];
        right[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }
        int sum=0;
        for(int i=1;i<n-1;i++){
            int x=min(left[i],right[i])-height[i];
            if(x>0)sum+=x;
        }
        return sum;
    }
};

// time complexity: O(n) space complexity: O(1)
// Two pointer approach
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) {
            return 0;
        }

        int l = 0, r = height.size() - 1;
        int leftMax = height[l], rightMax = height[r];
        int res = 0;
        while (l < r) {
            if (leftMax < rightMax) {
                l++;
                leftMax = max(leftMax, height[l]);
                res += leftMax - height[l];
            } else {
                r--;
                rightMax = max(rightMax, height[r]);
                res += rightMax - height[r];
            }
        }
        return res;
    }
};