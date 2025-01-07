#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findEarliestMoment(int n, vector<int>& a, int k) {
    int lcm = k; // Least common multiple of k and the differences between installation times
    for (int i = 1; i < n; ++i) {
        int diff = abs(a[i] - a[0]);
        lcm = (lcm * k) / __gcd(lcm, k);
    }
    
    int earliestMoment = a[0];
    while (true) {
        bool allOn = true;
        for (int i = 0; i < n; ++i) {
            if ((earliestMoment - a[i]) % (2 * k) >= k) {
                allOn = false;
                break;
            }
        }
        if (allOn) return earliestMoment;
        earliestMoment += lcm;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<findEarliestMoment(n,a,k)<<endl;
    }
    
    return 0;
}
