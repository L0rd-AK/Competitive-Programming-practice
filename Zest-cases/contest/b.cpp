#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

void AKG() {
    int n,k;cin>>n>>k;
    map<int,int>mp;
    while(k--){
        int a,b;cin>>a>>b;
        mp[a]+=b;
    }
    vector<pair<int, int>> vec(mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), cmp);
    int idx=0,ans=0;
    for(auto[x,y]:vec){
        if(idx==n)break;
        ans+=y;
        idx++;
    }
    
}
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }



    return 0;
}
