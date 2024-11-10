#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
   
void AKG() { 
    int n;cin>>n;
    vector<vector<int>> v(n, vector<int>(n-1, 0));
    map<int,int> mp;
    f(i,0,n){
        f(j,0,n-1){
            cin>>v[i][j];
            if(j==n-2)mp[v[i][j]]++;
        }
    }
    int uniq,multi;
    for(auto [x,y]:mp){
        if(y==1)uniq=x;
        if(y>1)multi=x;
    }
    f(i,0,n){
        if(v[i][n-2]==uniq){
            for(auto i:v[i])cout<<i<<" ";
            cout<<multi<<endl;
        }
    }
    cout<<endl;
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
