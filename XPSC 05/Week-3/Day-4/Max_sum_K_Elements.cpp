#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        long long windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
    
        long long maxSum = windowSum;
    
        for (int i = k; i < n; i++) {
            windowSum += arr[i] - arr[i - k]; 
            maxSum = max(maxSum, windowSum);   
        }
    
        return maxSum;
    }
};

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        long long ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
