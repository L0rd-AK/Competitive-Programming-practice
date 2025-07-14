#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << "\n"
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

const int MOD = 1e9+7;
const int N = 5e8+4;
bool cmp(int a,int b){
    return a%b>b%a;
}
void AKG() {
    int n;cin>>n;
    vector<pi> arr;
    f(i,0,3*n){
        int x;cin>>x;
        arr.push_back({x,i%n});
    }
    
    sort(all(arr),greater<pi>());
    int a=-1,b=-1,c=-1;
    ll ans=0;
    f(i,0,3*n){
        if(a!=-1&&b!=-1&&c!=-1)break;
        int j=i%n;
        if(j!=a&&j!=b&&j!=c){
            ans+=arr[i].first;
            if(a==-1)a=arr[i].second;
            else if(b==-1)b=arr[i].second;
            else if(c==-1)c=arr[i].second;
        }
    }
    pr(ans);

}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while (t--)AKG();
    return 0;
}