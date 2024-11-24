#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
   int n;cin>>n;
   vector<int> v(n);
   int z=0,nz=0;
   bool flg=false;
   f(i,0,n){
        cin>>v[i];
        if(v[i]==0)z++;
        else nz++;
        if(v[i]>=2)flg=true;
   }
   if(z<=((n+1)/2))prnt(0);
   else if(flg || z==n)prnt(1);
   else prnt(2);

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
