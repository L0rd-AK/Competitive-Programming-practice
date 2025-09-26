#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            string s=to_string(x);
            string a=s;
            reverse(s.begin(),s.end());
            return a==s;
        }
    };

    class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending with 0 (but not 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int rev = 0;
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        // If the number of digits is even: x == rev
        // If odd: x == rev/10 (middle digit ignored)
        return x == rev || x == rev / 10;
    }
};
