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
    int n ;cin>>n ;
    vector<vector<int>> a(n+2) ;
    for(int i = 0 ; i < n ; i++){
        int x;cin>>x;
        a[x].push_back(i) ;
    }
    int idx = 0 , day = INT_MAX ;
    for(int i = 1 ; i <= n ; i++){
        if(a[i].size() == 0) continue ;

        int mx = a[i][0] ;
        int j = 0 ;
        for(j = 1 ; j < a[i].size() ; j++){
            int y = (a[i][j] - a[i][j-1])/2 ;
            mx = max(mx,y) ;
        }
        mx = max(mx,n-1-a[i][j-1]) ;
        if(day > mx){
            day = mx ;
            idx = i ;
        }
    }
    cout<<idx<<" "<<day<<endl ;
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
