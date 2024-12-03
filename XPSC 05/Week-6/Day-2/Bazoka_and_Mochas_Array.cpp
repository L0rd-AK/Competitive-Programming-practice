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
    vector<int> a(n),ans(n);
    f(i,0,n)cin>>a[i];
    int pos=-1;
    f(i,0,n-1){
        if(a[i]>a[i+1]){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        yn(1);
    }else{
        f(i,pos+1,n)ans.push_back(a[i]);
        f(i,0,pos+1)ans.push_back(a[i]);
        yn(is_sorted(all(ans)));
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
