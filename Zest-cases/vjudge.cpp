#include <bits/stdc++.h>
using namespace std;

int countXORSatisfyingCondition(const vector<int>& A) {
    int mask = 0;
    
    // Find the mask for the permissible bits
    for (int a : A) {
        mask |= a;  // OR all elements to capture the union of bits in A
    }
    
    int count = 0;
    
    // Now we go through each possible X within the bitwise range of the mask
    for (int X = 1; X <= mask; ++X) {
        bool satisfiesCondition = true;
        for (int a : A) {
            if ((X ^ a) >= a) {
                satisfiesCondition = false;
                break;
            }
        }
        if (satisfiesCondition) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n;
    cin >> n; // Size of array
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        // cin >> A[i];
        cout<<(i^4)<<" ";
    }

    //int result = countXORSatisfyingCondition(A);
    //cout << result << endl;

    return 0;
}
