#include <bits/stdc++.h>
using namespace std;

#define yn(f) cout << (f ? "YES" : "NO") << endl;

bool cmp(pair<int,int>& a, pair<int,int>& b) {
    return (a.second - a.first) < (b.second - b.first);
}

void AKG() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++) {
        vp.push_back({a[i], b[i]});
    }
    
    sort(vp.begin(), vp.end(), cmp);
    
    int winsA = 0, neededWins = (n / 2) + 1;

    for (int i = 0; i < n; i++) {
        int votesA = vp[i].first;
        int votesB = vp[i].second;
        if (vp[i].first == vp[i].second) {
            if (x > 0) {
                winsA++;
                x--;
            }
        }else if (votesA > votesB) {
            winsA++; 
        } else {
            int votesNeeded = (votesB - votesA) + 1;
            if (x >= votesNeeded) {
                x -= votesNeeded; 
                winsA++; 
            }
        }
    }

    yn(winsA >= neededWins);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }
    return 0;
}
