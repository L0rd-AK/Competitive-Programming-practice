class Solution {
public:
    string addBinary(string a, string b) {
        int x = a.size() - 1, y = b.size() - 1;
        int carry = 0;
        string res = "";

        while (x >= 0 && y >= 0) {
            int s1 = a[x] - '0', s2 = b[y] - '0';
            int sum = s1 + s2 + carry;

            if (sum == 0) { res += '0'; carry = 0; }
            else if (sum == 1) { res += '1'; carry = 0; }
            else if (sum == 2) { res += '0'; carry = 1; }
            else { res += '1'; carry = 1; }

            x--; y--;
        }

        while (x >= 0) {
            int s1 = a[x] - '0';
            int sum = s1 + carry;

            if (sum == 0) { res += '0'; carry = 0; }
            else if (sum == 1) { res += '1'; carry = 0; }
            else { res += '0'; carry = 1; }

            x--;
        }

        while (y >= 0) {
            int s1 = b[y] - '0';
            int sum = s1 + carry;

            if (sum == 0) { res += '0'; carry = 0; }
            else if (sum == 1) { res += '1'; carry = 0; }
            else { res += '0'; carry = 1; }

            y--;
        }

        if (carry) res += '1';

        reverse(res.begin(), res.end());
        return res;
    }
};