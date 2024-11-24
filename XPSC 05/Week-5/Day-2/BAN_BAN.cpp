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
   if(n==1){
    prnt(1);
    prnt("1 3");
   }else if(n==2){
    prnt(1);
    prnt("1 6");
   }else{
    if(n%2==0)prnt(n/2);
    else prnt((n/2)+1);
    ll l=1,r=3*n;
    while(l<r){
        cout<<l<<" "<<r<<endl;
        l+=3;r-=3;
    }
   }
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
