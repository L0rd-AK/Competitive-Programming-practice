#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n;cin>>n;
    string s;cin>>s;
    int x=0,y=0,i=0;
    while(i<n){
        if(s[i]=='0'){
            y++;i++;
            while(s[i]=='0')i++;
        }else if(s[i]=='1'){
            x++;i++;
            while(s[i]=='1')i++;
        }
    }
    prnt(min(x,y));
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}