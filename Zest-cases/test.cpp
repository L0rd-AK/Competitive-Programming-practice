#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl
int akg(string& a, string& b)
{
    int ans=-1;
    f(i,0,a.length()){
        ans+=abs(a[i]-b[i]);
    }
    return ans;
}

void AKG(){
    int q,n;
    cin>>q>>n;
    vector<string> s;
    f(i,0,q){
        string x;
        cin>>x;
        s.push_back(x);
    }
    int ans = INT_MAX;
    for(int i = 0; i < q; ++i) {
        for(int j = i + 1; j < q; ++j) {
            ans = min(ans, akg(s[i], s[j]));
        }
    }
    prnt(ans+1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        AKG();
    }
#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
#endif
    return 0;
}
