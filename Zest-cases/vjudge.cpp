#include <bits/stdc++.h>
using namespace std;
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
int closeSubsequence(int n, int k, vector<int> &a) {
    map<int, int> first_occurrence;

    for (int i = 0; i < n; i++) {
        if (first_occurrence.count(a[i])) {
            int l = first_occurrence[a[i]], r = i;
            int z = a[l];

            // Compute bitwise AND for the subsequence
            for (int j = l + 1; j <= r; j++) {
                z &= a[j];
                if (z < k) break; // Early exit if AND is already less than k
            }

            if (z == k) return 1; // Valid subsequence found
        } else {
            first_occurrence[a[i]] = i; // Record the first occurrence of this element
        }
    }

    return 0; // No valid subsequence found
}

int main(){
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> a(n);
        f(i,0,n)cin>>a[i];
        cout<<closeSubsequence(n,k,a)<<" ";
    }
}
