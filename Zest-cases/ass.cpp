#include <bits/stdc++.h>
using namespace std;

/*
  Solves the "merge slimes of the same power p -> single slime of power p+1"
  and returns the maximum possible power among all slimes after performing
  merges as many times as you like, in any order.
*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int T; 
    cin >> T;  // Number of test cases
    while(T--) {
        int N; 
        cin >> N;
        
        // Read powers
        unordered_map<long long, long long> freq;
        freq.reserve(N*2);
        freq.max_load_factor(0.7f);

        long long x;
        for(int i = 0; i < N; i++){
            cin >> x;
            freq[x]++;
        }

        // Convert freq map to a vector of (power, count) and sort by power
        vector<pair<long long, long long>> v;
        v.reserve(freq.size());
        for (auto &pr : freq) {
            v.push_back({pr.first, pr.second});
        }
        sort(v.begin(), v.end());

        // We also keep a map from power -> index in v, so we can "carry" merges forward
        // by incrementing the power
        unordered_map<long long,int> indexOf;
        indexOf.reserve(v.size()*2);
        indexOf.max_load_factor(0.7f);
        for (int i = 0; i < (int)v.size(); i++) {
            indexOf[v[i].first] = i;
        }

        // Process from smallest to largest power
        // For each power p, form merges and "carry" them to p+1, p+2, etc.
        for (int i = 0; i < (int)v.size(); i++) {
            long long p = v[i].first;
            long long c = v[i].second;
            
            // Number of merges at power p
            long long merges = c / 2;
            if (merges > 0) {
                // Keep exactly c%2 leftover at power p
                v[i].second = c % 2;
                
                // We'll "carry" merges to higher powers
                long long carry = merges;
                long long nextP = p + 1;
                while (carry > 0) {
                    // If nextP isn't in indexOf yet, add a new entry
                    if (!indexOf.count(nextP)) {
                        indexOf[nextP] = (int)v.size();
                        v.push_back({nextP, 0});
                    }
                    int j = indexOf[nextP];
                    
                    // Add carry to v[j].second
                    v[j].second += carry;
                    // Next merges at that power
                    carry = v[j].second / 2;
                    v[j].second %= 2;
                    
                    nextP++;
                }
            }
        }

        // Now find the largest power that has a nonzero count
        long long answer = 0;
        for (auto &pcount : v) {
            if (pcount.second > 0) {
                answer = max(answer, pcount.first);
            }
        }

        cout << answer << "\n";
    }
    return 0;
}
