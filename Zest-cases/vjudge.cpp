#include <bits/stdc++.h>
using namespace std;

int computeF(long long x, const vector<int>& centers, const vector<int>& radii) {
    int best = -1;
    int n = centers.size();
    for (int i = 0; i < n; i++){
        int d = abs((long long)x - centers[i]);
        if(d <= radii[i]){
            int cur = (int)floor(sqrt((long double) radii[i]*radii[i] - (long long)d*d));
            best = max(best, cur);
        }
    }
    return best;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int t;
    cin >> t;
    while(t--){
        int n, M;
        cin >> n >> M;

        vector<int> centers(n), radii(n);
        for (int i = 0; i < n; i++){
            cin >> centers[i];
        }
        for (int i = 0; i < n; i++){
            cin >> radii[i];
        }

        int globalXmin = INT_MAX, globalXmax = INT_MIN;
        for (int i = 0; i < n; i++){
            globalXmin = min(globalXmin, centers[i] - radii[i]);
            globalXmax = max(globalXmax, centers[i] + radii[i]);
        }

        vector<long long> cand;

        cand.push_back(globalXmin);
        cand.push_back((long long)globalXmax + 1);

        for (int i = 0; i < n; i++){
            int L_i = centers[i] - radii[i];
            int R_i = centers[i] + radii[i];
            cand.push_back(L_i);
            cand.push_back((long long)R_i + 1);
            for (int t_val = 0; t_val <= radii[i]; t_val++){
                long double disc = (long double)radii[i]*radii[i] - (long double)t_val*t_val;
                if(disc < 0) continue;
                long double d = sqrt(disc);
                long double leftPos = centers[i] - d;
                long double rightPos = centers[i] + d;
                long long c1 = (long long)floor(leftPos);
                long long c2 = (long long)ceil(leftPos);
                long long c3 = (long long)floor(rightPos);
                long long c4 = (long long)ceil(rightPos);
                c1 = max((long long)L_i, c1);
                c2 = max((long long)L_i, c2);
                c3 = min((long long)R_i, c3);
                c4 = min((long long)R_i, c4);
                cand.push_back(c1);
                cand.push_back(c2);
                cand.push_back(c3);
                cand.push_back(c4);
            }
        }

        sort(cand.begin(), cand.end());
        cand.erase(unique(cand.begin(), cand.end()), cand.end());

        long long ans = 0;
        for (size_t i = 0; i + 1 < cand.size(); i++){
            long long L = cand[i], R = cand[i+1];
            if (R <= globalXmin || L > globalXmax) continue;
            L = max((long long)globalXmin, L);
            R = min((long long)globalXmax + 1, R);
            if (L >= R) continue;
            int f_val = computeF(L, centers, radii);
            if(f_val < 0) continue;
            long long countForInterval = (R - L) * (2LL * f_val + 1LL);
            ans += countForInterval;
        }

        cout << ans << "\n";
    }
    return 0;
}
