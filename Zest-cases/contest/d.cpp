#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n;cin>>n;
    string a,b;cin>>a>>b;
    int c1=0,c2=0;
    f(i,0,n){
        if(a[i]=='P' && b[i]=='R')c1++;
        else if(a[i]=='R' && b[i]=='S')c1++;
        else if(a[i]=='S' && b[i]=='P')c1++;
        else if(a[i]!=b[i]) c2++;
    }
    if(c1>c2)prnt(0);
    else if(c1==c2)prnt(1);
    else{
        int ans=0;
        while(1){
            if(c1>c2)break;
            if(c2){
                c1++;
                c2--;
            }else c1++;
            ans++;
        }
        prnt(ans);
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
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
