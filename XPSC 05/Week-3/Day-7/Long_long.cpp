#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n;cin>>n;
    vector<int> v(n);
    ll sum=0;
    f(i,0,n){
        cin>>v[i];
        sum+=abs(v[i]);
    }
    int ans=0;
    int i=0;
    while(i<n){
        if(v[i]<0){
            bool flg=1;
            while(i<n && v[i]<=0){
                if(flg){
                    ans++;
                    flg=0;
                }
                i++;
            }
        }
        i++;
    }
    cout<<sum<<" "<<ans<<endl;
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