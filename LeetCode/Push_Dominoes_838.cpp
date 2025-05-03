#include <bits/stdc++.h>
using namespace std;

class Domino {
public:
    void doubleDominoPush(int last_R, int pos, string& str) {
        while (last_R < pos) {
            str[last_R++] = 'R';
            str[pos--] = 'L';
        }
    }
    
    void leftDominoPush(int start, int end, string& str) {
        while (start <= end)
            str[start++] = 'L';
    }
    
    void rightDominoPush(int last_R, int pos, string& str) {
        while (last_R <= pos)
            str[last_R++] = 'R';
    }
};

class Solution {
public:
    string pushDominoes(string str) {
        Domino dom; 
        int n = str.size();
        queue<pair<char, int>> q;
        int pos = 0;
        
        // Find the first non '.' character
        for (; pos < n; pos++) {
            if (str[pos] != '.') {
                q.push({str[pos], pos});
                // Handle the case where first non '.' is 'L'
                if (str[pos] == 'L') {
                    dom.leftDominoPush(0, pos - 1, str);
                }
                break;
            }
        }
        
        pair<char, int> ch;
        for (; pos < n; pos++) {
            if (!q.empty()) {
                ch = q.back();
            }
            if (str[pos] == 'L') {
                if (ch.first == 'R') {
                    dom.doubleDominoPush(ch.second, pos, str);
                } else if (ch.first == 'L' || q.empty()) {
                    dom.leftDominoPush(ch.second + 1, pos - 1, str);
                }
                q.push({'L', pos});
            } else if (str[pos] == 'R') {
                if (ch.first == 'R' || q.empty()) {
                    dom.rightDominoPush(ch.second + 1, pos - 1, str);
                }
                q.push({'R', pos});
            }
        }
        
        // Handle remaining R dominoes after the last processed character
        if (!q.empty()) {
            auto last = q.back();
            if (last.first == 'R') {
                dom.rightDominoPush(last.second + 1, n - 1, str);
            }
        }
        
        return str;
    }
};