#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define debug(p) for(auto i:p)cout<<i<<" ";cout<<endl;

// Function to generate the permutation
vector<int> func(int n, int sum) {
    if (n == 1) {
        return {1};
    }
    if (sum % (n + 1) == 0) {
        return {-1}; // Return -1 if condition is met
    }
    
    vector<int> permutation(n);
    int i = 0, ans = 0;
    for (i = 0; i < n; i++) { // Changed to < n to avoid out of bounds error
        ans += (i + 1);
        if (ans < (n + 1)) {
            permutation[i] = (i + 1);
        } else {
            break;
        }
    }
    // Adjust indices and logic for correct permutation construction
    for (int j = i + 2; i < n && j >= 1; j--) {
        permutation[i] = j;
        i++;
    }

    return permutation;
}

void AKG() {
    int n;
    cin >> n;
    int sum = 0;
    f(i, 1, n + 1) sum += i;
    vector<int> ans = func(n, sum);
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
