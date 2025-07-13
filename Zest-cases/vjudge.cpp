#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(auto &x : a) 
            cin >> x;

        // 1) find the minimum
        long long mn = *min_element(a.begin(), a.end());
        // 2) count how many times it appears
        int cnt = count(a.begin(), a.end(), mn);

        // If it appears exactly once → you can place it first,
        // and every other element > mn, so mn mod anything = mn ≠ 0.
        // Otherwise, you'll eventually do mn mod mn = 0.
        cout << (cnt == 1 ? "YES\n" : "NO\n");
    }
    return 0;
}
