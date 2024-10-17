#include <iostream>
#include <vector>
using namespace std;

#define ll long long

void AKG() {
    int n;
    cin >> n;
    
    vector<ll> arr(n-2);
    ll part_sum = 0;
    
    // Input the remaining elements of the array and calculate their sum
    for (int i = 0; i < n-2; i++) {
        cin >> arr[i];
        part_sum += arr[i];
    }
    
    ll total_sum;
    cin >> total_sum;
    
    // Calculate the sum of the two deleted elements
    ll deletedSum = total_sum - part_sum;
    
    // We need to count the number of valid pairs (x, y) where x + y = deletedSum
    ll count = 0;
    
    // Iterate through possible values of x and calculate y = deletedSum - x
    for (ll x = 1; x <= deletedSum; x++) {
        ll y = deletedSum - x;
        if (y >= 1 && y <=1e18) {
            count++;
        }
    }
    
    // Output the result for this test case
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
