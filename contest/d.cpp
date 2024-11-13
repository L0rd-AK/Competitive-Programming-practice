#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
   

void AKG() { 
   int n;cin>>n;
   vector<int> v(n);
   f(i,0,n)cin>>v[i];
   int x=0,y=0;
   f(i,0,n-1){
     if(v[i]==1)x++;
   }
   f(i,1,n){
     if(v[i]==0)y++;
   }
   if(x+y < n-1){
        prnt((x+y)+n);
   }else prnt(2*n-1);

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
