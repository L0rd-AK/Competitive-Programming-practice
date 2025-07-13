#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& arr, int low, int high, int x,int idx){
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if(mid!=idx){
                if (arr[mid]+arr[idx] == x)return mid;
                if (arr[mid]+arr[idx] < x)low = mid + 1;
                else high = mid - 1;
            }else{
                if (arr[mid]+arr[idx] < x)low = mid + 1;
                else high = mid - 1;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        if(n==2)return {1,2};
        for(int i=0;i<n;i++){
            int j=binarySearch(numbers,0,n-1,target,i);
            if(j!=-1){
                int x=min(i,j);
                int y=max(i,j);
                return {x+1,y+1};
            }
        }
        return {0,0};
    }
};

class Solution {
public:
    int binarysearch(const vector<int>& numbers, int val) {
        int l = 0, r = numbers.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (numbers[mid] == val) 
                return mid;
            else if (numbers[mid] < val) 
                l = mid + 1;
            else 
                r = mid - 1;
        }
        return -1;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for (int i = 0; i < n; ++i) {
            int complement = target - numbers[i];
            int j = binarysearch(numbers, complement);
            if (j != -1 && j != i) {
                return { min(i, j) + 1, max(i, j) + 1 };
            }
        }
        return {};
    }
};
