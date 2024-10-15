#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl


void AKG() {
    string a,b;
    while(cin>>a>>b){
      int ans=0;
        for(int i=0,j=0;i<a.length();i++){
           if(a[i]==b[j]){
            ans++;
            j++;
           }
        }
        if(ans==b.length())cout<<"Possible\n";
        else cout<<"Impossible\n";
    }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }
    
    return 0;
}
