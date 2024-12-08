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
    int n;cin>>n;
    int sum=0;
    vector<int> a(n);
    int ans=0;
    f(i,0,n){
        cin>>a[i];
        ans+=a[i];
    }
    if(ans==360){
        yn(1);
        return;
    }
    sum=0;
    f(i,0,n){
        if(sum-a[i]>0)sum-=a[i];
        else sum+=a[i];
    }
    yn(sum==0);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
