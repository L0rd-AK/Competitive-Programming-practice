#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define debug(p) for(auto i:p)cout<<i<<" ";cout<<endl;

void AKG() {
    string s;cin>>s;
    int n=s.length();
    if(n==2 && s[0]=='(' && s[1]==')'){
        prnt("NO");
        return;
    }else{
        int cnt=0;
        f(i,0,n-1){
            if(s[i]=='(' && s[i+1]==')')cnt++;
        }
        if(cnt>=2){
            f(i,0,2*n){
                if(n){}
            }
        }
    }
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
