#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
   int n,r;cin>>n>>r;
   int size=2*r,ans=0;
   int a[n];
   f(i,0,n)cin>>a[i];

   f(i,0,n){
     if(a[i]%2==0){
        ans+=a[i];
        size-=a[i];
        a[i]=0;
     }else{
        if(a[i]!=1){
            int x=a[i]-(a[i]%2);
            ans+=x;
            size-=x;
            a[i]=a[i]%2;
        }
     }
   }
    int odd=0;
   f(i,0,n){
     if(a[i]==1){
        odd++;
     }
   }
   ans+=min(odd,size-odd);
    prnt(ans);
 
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    #ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;
}
