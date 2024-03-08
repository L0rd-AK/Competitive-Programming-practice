#include <bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int n, vector<int> a) {
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(a[i]!=0)ans.push_back(a[i]);
    }
    for(int i=ans.size();i<n;i++)ans.push_back(0);
    return ans;
}
int main(){
    int n=5;
    vector<int> a={4,0,3,2,5};
    moveZeros(n,a);
}