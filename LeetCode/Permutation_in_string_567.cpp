#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        unordered_map<char, int> count1, count2;
        for (char c : s1) count1[c]++;
        for (int i = 0; i < s1.length(); i++) count2[s2[i]]++;

        int match = 0;
        for (char c = 'a'; c <= 'z'; c++)
            if (count1[c] == count2[c]) match++;

        int l = 0, r = s1.length();

        while (r < s2.length()) {
            if (match == 26) return true;

            // character going out of the window
            char left = s2[l];
            if (count1[left] == count2[left]) match--;
            count2[left]--;
            if (count1[left] == count2[left]) match++;

            // character coming into the window
            char right = s2[r];
            if (count1[right] == count2[right]) match--;
            count2[right]++;
            if (count1[right] == count2[right]) match++;

            l++;
            r++;
        }

        return match == 26;
    }
};
