#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> A(N+1), P(N+1);
        for(int i = 1; i <= N; i++){
            cin >> A[i];
            P[i] = (P[i-1] + A[i]) % 3;
        }
        int last0 = 0;
        for(int i = 1; i <= N; i++){
            if(P[i] == 0) last0 = i;
        }
        if(last0 == 0){
            cout << "Yes\n";
            continue;
        }
        vector<int> first(3, INT_MAX);
        for(int i = 1; i <= N; i++){
            if(first[P[i]] == INT_MAX) first[P[i]] = i;
        }
        bool ok = false;
        for(int r = 1; r <= 2; r++){
            if(first[r] > last0 && first[r] <= N){
                ok = true;
                break;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
