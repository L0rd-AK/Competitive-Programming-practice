#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"

// Function to check if a number is prime
bool isPrime(ll n) {
   cout<<n<<endl;
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to check if a number has exactly 3 divisors
bool hasExactlyThreeDivisors(ll n) {
    ll sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n != n) return false; // Check if n is a perfect square
    return isPrime(sqrt_n); // Check if the square root is prime
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (hasExactlyThreeDivisors(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}