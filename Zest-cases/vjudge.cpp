#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) x.begin(), x.end()

vector<vector<ll>> divs(10008);

// Function to precompute divisors for numbers up to 10007
void precompute_divisors() {
    for (int i = 1; i <= 10007; i++) {
        for (int j = 1; j * j <= i; j++) {
            if (i % j == 0) {
                divs[i].push_back(j);
                if (j != (i / j))
                    divs[i].push_back(i / j);
            }
        }
        //sort(all(divs[i]));
    }
}

// Function to calculate divisors of a number dynamically
vector<ll> calculate_divisors(int num) {
    vector<ll> divisors;
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            divisors.push_back(i);
            if (i != (num / i))
                divisors.push_back(num / i);
        }
    }
    //sort(all(divisors));
    return divisors;
}

void solve(int d) {
    for (int i = d + 1;; i++) {
        vector<ll> divisors;
        
        // Use precomputed divisors if i <= 10007, otherwise compute dynamically
        if (i <= 10007) {
            divisors = divs[i];
        } else {
            divisors = calculate_divisors(i);
        }
        
        // Check if the number has at least 4 divisors
        if (divisors.size() >= 4) {
            bool valid = true;
            
            // Check if the difference between consecutive divisors is at least d
            for (int j = 0; j < divisors.size() - 1; j++) {
                if (abs(divisors[j + 1] - divisors[j]) < d) {
                    valid = false;
                    break;
                }
            }
            
            // If valid, print the number and return
            if (valid) {
                cout << i << endl;
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    precompute_divisors(); // Precompute divisors for numbers up to 10007

    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;
        solve(d);
    }

    return 0;
}
