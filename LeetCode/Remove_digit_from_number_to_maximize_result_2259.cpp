#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDigit(string number, char digit) {
        int n = number.length();
        int idx = -1;

        for (int i = 0; i < n - 1; i++) {
            if (number[i] == digit && number[i + 1] > number[i]) {
                idx = i;
                break;
            }
        }

        if (idx == -1) {
            for (int i = n - 1; i >= 0; i--) {
                if (number[i] == digit) {
                    idx = i;
                    break;
                }
            }
        }

        string ans = "";
        for (int i = 0; i < n; i++) {
            if (i != idx) ans += number[i];
        }

        return ans;
    }
};
