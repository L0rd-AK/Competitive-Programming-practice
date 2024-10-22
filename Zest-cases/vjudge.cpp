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
    string a,b;
    cin>>a>>b;
    int ans1=0;
        int x=0,y=0;
    for(int i=0;i<n;i+=3){
        x=0,y=0;
        for(int j=i;j<3;j++){
            if(a[i]=='A')x++;
            if(b[i]=='A')y++;
        }
        if(x>=2)ans1++;
        if(y>=2)ans1++;
    }
    cout<<x<<" "<<y<<" "<<ans1<<endl;
    prnt(ans1);
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
