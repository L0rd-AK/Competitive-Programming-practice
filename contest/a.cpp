#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
   

void AKG() { 
   int n;
   cin>>n;
   map<int,int> mp;
   while(n--){
    int x;cin>>x;
    mp[x]++;
   }
   int ans=0;
   for(auto [x,y]:mp){
    ans+=(y/2);
   }
   prnt(ans);
}

int main() {
 

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
     cin >> t;
    while (t--) {
        AKG();
    }



    return 0;
}
