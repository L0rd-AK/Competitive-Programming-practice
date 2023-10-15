#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    return (n & (n - 1)) == 0;
}

bool isPowerOfThree(int n) {
    return n > 0 && 1162261467 % n == 0;
}

bool isExpressible(int n) {
    if (n == 1) {
        return true; 
    }

    
    return isPowerOfTwo(n) || isPowerOfThree(n);
}

int main() {
    int N;
    cin >> N;

    if (isExpressible(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
