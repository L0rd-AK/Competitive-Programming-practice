#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n,k;cin>>n>>k;
    string s,t;cin>>s>>t;
    int x=0,o=0,z=0;
    f(i,0,n){
        if(s[i]!=t[i])x++;
        if(t[i]=='1')o++;
        if(t[i]=='0')z++;
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s!=t)yn(0);
    else if(k<(x+1)/2)yn(0);
    else if(z>=2 || o>=2)yn(1);
    else if((k-((x+1)/2))%2==1)yn(0);
    else yn(1);
    // cout<<k<<" "<<x<<" "<<x/2<<" "<<k-(x/2)<<" "<<(k-((x)/2))<<endl;
    // cout<<0%2<<endl;
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
