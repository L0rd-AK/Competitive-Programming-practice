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
    vi a(n);
    f(i,0,n)cin>>a[i];
    vector<pair<bool,bool>> v;
    priority_queue<int> maxPQ;
    maxPQ.push(a[0]);
    v[0].first=true;
    f(i,1,n){
        if(a[i]>maxPQ.top())v[i].first=true;
    }
    priority_queue<int, vector<int>, greater<int>> minPQ;
    minPQ.push(a[n-1]);
    v[n-1].second=true;
    for(int i=n-2;i>=0;i--){
        if(a[i]<minPQ.top())v[i].second=true;
    }
    cout<<"Humanity is doomed!\n";
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    f(j,1,t+1){
        int n;cin>>n;
        vi a(n);
        f(i,0,n)cin>>a[i];
        vector<pair<bool,bool>> v;
        priority_queue<int> maxPQ;
        maxPQ.push(a[0]);
        v[0].first=true;
        f(i,1,n){
            if(a[i]>maxPQ.top())v[i].first=true;
        }
        priority_queue<int, vector<int>, greater<int>> minPQ;
        minPQ.push(a[n-1]);
        v[n-1].second=true;
        for(int i=n-2;i>=0;i--){
            if(a[i]<minPQ.top())v[i].second=true;
        }
        int idx=1;bool flg=0;
        for(auto vp:v){
            if(vp.first==1&&vp.second==1){
                 cout<<"Case "<<j<<": "<<idx<<endl;
                flg=1;break;
            }
            
            idx++;
        }
        if(flg)continue;
        cout<<"Case "<<j<<": "<<"Humanity is doomed!\n";
    }
    return 0;
}
