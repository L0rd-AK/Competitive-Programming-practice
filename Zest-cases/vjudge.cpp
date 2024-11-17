#include <bits/stdc++.h>
using namespace std;

struct State {
    int pos;
    int jumpPower;
    int powerUps;
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, n, m;
        cin >> L >> n >> m;

        vector<pair<int, int>> hurdles(n);
        vector<pair<int, int>> powerUps(m);

        for (int i = 0; i < n; i++) {
            cin >> hurdles[i].first >> hurdles[i].second;
        }

        for (int i = 0; i < m; i++) {
            cin >> powerUps[i].first >> powerUps[i].second;
        }

        sort(hurdles.begin(), hurdles.end());
        sort(powerUps.begin(), powerUps.end());

        queue<State> q;
        q.push({1, 1, 0});

        map<pair<int, int>, bool> visited;
        visited[{1, 1}] = true;

        auto isHurdle = [&](int pos) {
            for (auto &h : hurdles) {
                if (h.first <= pos && pos <= h.second) return true;
            }
            return false;
        };

        bool reached = false;

        while (!q.empty()) {
            auto [pos, jumpPower, powerUpsCount] = q.front();
            q.pop();

            if (pos >= L) {
                cout << powerUpsCount << endl;
                reached = true;
                break;
            }

            for (int nextPos = pos + 1; nextPos <= min(pos + jumpPower, L); nextPos++) {
                if (isHurdle(nextPos)) continue;
                if (!visited[{nextPos, jumpPower}]) {
                    visited[{nextPos, jumpPower}] = true;
                    q.push({nextPos, jumpPower, powerUpsCount});
                }
            }

            for (auto &p : powerUps) {
                if (p.first == pos) {
                    int newJumpPower = jumpPower + p.second;
                    if (!visited[{pos, newJumpPower}]) {
                        visited[{pos, newJumpPower}] = true;
                        q.push({pos, newJumpPower, powerUpsCount + 1});
                    }
                }
            }
        }

        if (!reached) {
            cout << -1 << endl;
        }
    }
    return 0;
}
