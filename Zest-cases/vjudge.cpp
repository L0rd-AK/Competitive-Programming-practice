#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum % x != 0){
            cout << n << "\n";
            continue;
        }
        int left = 0;
        while(left < n && a[left] % x == 0) left++;
        int right = n - 1;
        while(right >= 0 && a[right] % x == 0) right--;
        if(left == n){
            cout << -1 << "\n";
        } else {
            int removeLeft = n - (left + 1);
            int removeRight = right;
            cout << max(removeLeft, removeRight) << "\n";
        }
    }
    return 0;
}
