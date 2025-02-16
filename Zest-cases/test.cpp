#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<ll, ll>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif
const int N  = 2e5+10;
void AKG() {
    int n;
    cin >> n;
    vi a(n);
    unordered_map<int, int> mp,mp1;
    set<int>st;
    f(i, 0, n) {
        cin >> a[i];
        mp[a[i]]++;
        st.insert(a[i]);
    }
    if(st.size()==n){
        pr("1 1");
        return;
    }else if(st.size()==1){
        pr(0);
        return;
    }
    int max_itm = 0,mx=INT_MIN,maxx=INT_MIN;
    for(auto i:mp){
        if(i.second>maxx){
            maxx=i.second;
            max_itm=i.first;
        }
    }
    int l,r,i=0,j=0;
    while(j<n){
        if(mp[a[j]]==maxx){
            i=j+1;
        }else{
            int x=j-i+1;
            if(x>mx){
                mx=x;
                l=i+1;
                r=j+1;

            }
        }
        j++;
    }
    cout<<i<<" "<<j<<endl;
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
