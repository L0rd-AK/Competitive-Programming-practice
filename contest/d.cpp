#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n, k;
    cin >> n >> k;
    if(n==1 || k==1){
        prnt(-1);
        return;
    }
        int z=n-k;
        if(z>k){
            for(int i=k+1;i<=n;i++)cout<<i<<" ";
            for(int i=k;i>=1;i--)cout<<i<<" ";
            cout<<endl;
        }else{
            for(int i=k;i>=1;i--)cout<<i<<" ";
            for(int i=k+1;i<=n;i++)cout<<i<<" ";
            cout<<endl;
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
