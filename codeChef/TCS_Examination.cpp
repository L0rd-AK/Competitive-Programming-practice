#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first+a.second < b.first+b.second;
}

void AKG() {
    int d1,d2,d3;cin>>d1>>d2>>d3;
    int s1,s2,s3;cin>>s1>>s2>>s3;
    int sum1=d1+d2+d3;
    int sum2=s1+s2+s3;
    if(sum1==sum2){
        if(d1==s1 && s2==d2 && s3==d3)prnt("TIE");
        else if(d1>s1)prnt("DRAGON");
        else if(s1>d1)prnt("SLOTH");
        else if(d2>s2)prnt("DRAGON");
        else if(s2>d2)prnt("SLOTH");
    }else if(sum1>sum2){
        prnt("DRAGON");
    }else prnt("SLOTH");
   
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
