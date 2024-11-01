#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n,m;
    cin >> n>>m;
    map<string,string>mp;
    while(n--){
      string a,b;cin>>a>>b;
      b+=";";
      mp[b]=a;
    }

    while(m--){
      string a,b;cin>>a>>b;
      if(mp.find(b)!=mp.end()){
        cout<<a<<" "<<b<<" #"<<mp[b]<<endl;
      }else{
        mp.insert({b,a});
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
