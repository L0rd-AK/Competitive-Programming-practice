#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<ll, ll>

const int MOD = 1e9+7;
ll N = 1e18;

void AKG(){
    string s;cin >> s;
    int i = 0,str_sz = 0, str_len = 0,n=s.length();
    bool flg = false;
        while(i < n) {
            if(s[i] == '\\' && i + 1 < n && s[i + 1] == '0') {
                str_sz++;
                if(!flg)flg = true;
                i+= 2;
            } else {
                str_sz++;
                if(!flg)str_len++;
                i++;
            }
        }
    cout<<++str_sz<<" "<<str_len<<endl;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while (t--)AKG();
    return 0;
}
