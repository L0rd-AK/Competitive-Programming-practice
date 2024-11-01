#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second < b.second;
}

void AKG() {
    int n;
    cin >> n;
    vector<string> v(n);
    f(i,0,n)cin>>v[i];
    map<string, int> mp;
    
    for(int i=0;i<n;i++){
      if(mp[v[i]]>0){
        yn(1);
      }else{
        mp[v[i]]++;
        yn(0);
      }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
