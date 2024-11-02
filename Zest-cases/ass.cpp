#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    string s; 
    cin >> s;
    int n; 
    cin >> n;
    int len = s.length();

    bool flg1 = false,flg2=false;
    while (n--) {
        int a; 
        cin >> a;
        a--;  
        char c; 
        cin >> c;

        if(len < 4){
            yn(0);
            continue;
        }

        if(s[a] != c){
            s[a] = c;

            flg2 = false;
            for (int i = a; i <= a+3; i++){
                if (s.substr(i, 4) == "1100"){
                    flg2 = true;
                    break;
                }
            }
        }
		flg1=false;
		for (int i = 0; i <= len - 4; i++) {
			if (s.substr(i, 4) == "1100") {
				flg1 = true;
				break;
			}
    	}
        yn((flg1 || flg2));
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = chrono::high_resolution_clock::now();
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    #ifndef ONLINE_JUDGE
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;
}
