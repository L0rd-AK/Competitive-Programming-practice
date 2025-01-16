#include <iostream>
#include <vector>
using namespace std;

int countAlmostPrimes(int n) {
    vector<int> primeDivisors(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        if (primeDivisors[i] == 0) { 
            for (int j = i; j <= n; j += i) {
                primeDivisors[j]++;
            }
        }
    }
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (primeDivisors[i] == 2) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countAlmostPrimes(n) << endl;
    return 0;
}
