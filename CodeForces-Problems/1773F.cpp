#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;

    if(n == 1) {
        if(a == b && a > 0) {
            cout << 1 << "\n";
            cout << a << ":" << b << "\n";
        }
        else {
            int draws = (a == b && a == 0) ? 1 : 0;
            cout << draws << "\n";
            cout << a << ":" << b << "\n";
        }
        return 0;
    }

    int totalGoals = a + b;
    int forcedDraws = 0;
    if(totalGoals < n){
        forcedDraws = n - totalGoals;
    }

    cout << forcedDraws << "\n";

    vector<pair<int,int>> matches(n, {0,0});

    for(int i = 0; i < forcedDraws; i++){
        matches[i] = {0, 0};
    }

    int m = n - forcedDraws;

    if(m == 0){
        for(int i = 0; i < n; i++){
            cout << matches[i].first << ":" << matches[i].second << "\n";
        }
        return 0;
    }

    bool usedA = false;
    bool usedB = false;

    int startIndex = forcedDraws;
    for(int i = 0; i < m; i++){
        int idx = startIndex + i;
        if(!usedA && a > 0) {
            matches[idx].first = 1;
            a--;
            usedA = true;
        }
        else if(!usedB && b > 0) {
            matches[idx].second = 1;
            b--;
            usedB = true;
        }
        else {
            if(a >= b && a > 0) {
                matches[idx].first = 1; 
                a--;
            } else if(b > 0) {
                matches[idx].second = 1;
                b--;
            }
        }
    }

    auto tryAddA = [&](int i){
        if(a == 0) return;
        int x = matches[i].first;
        int y = matches[i].second;
        if(x > y) {
            matches[i].first += a;
            a = 0;
        }
        else if(x < y) {
            int diff = y - x;
            if(a > diff) {
                matches[i].first += a;
                a = 0;
            }
            else if(a == diff) {
            }
            else {
                matches[i].first += a;
                a = 0;
            }
        }
        else {
            if(a > 0) {
                matches[i].first += a; 
                a = 0;
            }
        }
    };

    auto tryAddB = [&](int i){
        if(b == 0) return;
        int x = matches[i].first;
        int y = matches[i].second;
        if(y > x) {
            matches[i].second += b;
            b = 0;
        }
        else if(y < x) {
            int diff = x - y;
            if(b > diff) {
                matches[i].second += b;
                b = 0;
            }
            else if(b == diff) {
            }
            else {
                matches[i].second += b;
                b = 0;
            }
        }
        else {
            if(b > 0) {
                matches[i].second += b;
                b = 0;
            }
        }
    };

    bool changed = true;
    while((a > 0 || b > 0) && changed){
        changed = false;
        if(a > 0){
            for(int i = startIndex; i < n; i++){
                int oldA = a;
                tryAddA(i);
                if(a < oldA){
                    changed = true;
                    if(a == 0) break;
                }
            }
        }
        if(b > 0){
            for(int i = startIndex; i < n; i++){
                int oldB = b;
                tryAddB(i);
                if(b < oldB){
                    changed = true;
                    if(b == 0) break;
                }
            }
        }
    }

    for(auto &pr : matches){
        cout << pr.first << ":" << pr.second << "\n";
    }

    return 0;
}
