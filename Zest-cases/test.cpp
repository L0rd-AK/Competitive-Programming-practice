#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
   

void AKG() { 
   int n,m;cin>>n>>m;
   vector<vector<char>> v( n+2 , vector<char> (m+2)); 
   for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin>>v[i][j];
    }
   }
   int ans=0;
   for(int i=1;i<=n;){
    for(int j=1;j<=m;){
        if(v[i][j]=='#'){
            ans++;
            v[i+1][j]='.';
            v[i-1][j]='.';
            v[i][j+1]='.';
            v[i][j-1]='.';
            v[i-1][j-1]='.';
            v[i+1][j+1]='.';
            v[i-1][j+1]='.';
            v[i+1][j-1]='.';
            i+=3;
            j+=3;
        }else{
            i++;
            j++;
        }
    }
   }
   prnt(ans);
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
