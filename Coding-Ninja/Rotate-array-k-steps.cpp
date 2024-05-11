#include <bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int>arr, int k) {
    int n=arr.size();
    vector<int> v,ans;
    for(int i=0;i<k;i++)v.push_back(arr[i]);
    for(int i=k;i<n;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<k;i++)ans.push_back(v[i]);
    return ans;
}
