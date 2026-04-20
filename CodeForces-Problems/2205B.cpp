
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<ll, ll>

const int MOD = 1e9+7;
ll N = 1e18;
ll primeFactors(int n) {
    set<int> factors;
    while (n % 2 == 0) {
        factors.insert(2);
        n = n / 2;
    }

    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            factors.insert(i);
            n = n / i;
        }
    }

    if (n > 2)
        factors.insert(n);
	ll fact=1;
	for(int i:factors)fact*=i;
    return fact;
}
void AKG(){
  int n;cin>>n;
  pr(primeFactors(n));
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while(t--)AKG();
    return 0;
}
