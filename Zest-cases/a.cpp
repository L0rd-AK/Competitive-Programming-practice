#include <iostream>
using namespace std;


// Function to compute the sum from L to R in the sequence
long long rangeSum(long long L, long long R) {
    long long sum = 0;
    // Iterate through the range from L to R and compute the sum
    for (long long i = L; i <= R; i++) {
        sum += (i + 1) / 2;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // Read N and Q
    long long N, Q;
    cin >> N >> Q;
    
    // Process each query
    while (Q--) {
        long long L, R;
        cin >> L >> R;
        
        // Output the sum for the range [L, R]
        cout << rangeSum(L, R) << '\n';
    }

    return 0;
}
