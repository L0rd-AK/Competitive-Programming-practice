#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
    int n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]!=c[i] and b[i]!=c[i])ans=1;
    }
    if(ans)cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
