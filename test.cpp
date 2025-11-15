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
ll N = 1e18;

void AKG(){
    int n;cin>>n;
        vi v;
        int cmp=n;
        for(int i=2;i*i<=cmp;++i){
            while(cmp%i==0){
                v.push_back(i);
                cmp/=i;
            }
        }
        if(cmp>1)v.push_back(cmp);
        int len=v.size();
        ll a=v[0],b=1,c=1;
        int i=1;
        for(i;i<len;++i){
            if(b<=a)b*=v[i];
            else
                break;
        }
        for(i;i<len;++i){
            c*=v[i];
        }
        if(a*b*c==n && a!=b && a!=c && b!=c &&a>1 && b>1&&c>1){
            yn(1);
            cout<<a<<" "<<b<<" "<<c<<"\n";
        }
        else yn(0);
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while(t--)AKG();
    return 0;
}
