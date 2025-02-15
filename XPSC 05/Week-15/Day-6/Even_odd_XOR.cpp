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
    ll n,s=0;
    cin>>n;
    int a[N];
    for(int i=0;i<n-2;i++)
    {
        a[i]=i;s^=i;
    }
    if(s==0)
    {
        a[0]=(1<<30)-1;
        s=(1<<30)-1;
    }
    a[n-2]=s|(1<<30);
    a[n-1]=(1<<30);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
