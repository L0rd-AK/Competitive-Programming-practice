#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(),x.end()
void AKG() {
   int n;cin>>n;
   int z=(n*(n-1)/2);
   vector<int> v(z);
   f(i,0,z)cin>>v[i];
   sort(all(v));
   for(int i=0;i<z;i+=--n){
    cout<<v[i]<<" ";
   }
   cout<<1000000000<<endl;
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