#include <bits/stdc++.h>
using namespace std;

int count_drinks(string s) {
    vector<int> v;
    int count = 0;
    for (char c : s) {
        if (c == '1') {
            count++;
        } else {
            if (count > 0) {
                v.push_back(count);
                count = 0;
            }
        }
    }
    if (count > 0) {
        v.push_back(count);
    }
    sort(v.rbegin(), v.rend());
    int sum = 0;
    
    for (int i = 0; i < v.size(); i += 2) {
        sum += v[i];
    }

    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << count_drinks(s) << endl;
    }

    return 0;
}
