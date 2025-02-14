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
#define pi pair<int, int>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif

void AKG(){
    string s;cin>>s;
    int n=s.length();
    int ans=INT_MAX;
    for(char ch='a';ch<='z';ch++){
        int mx=INT_MIN,cnt=0;
        f(i,0,n){
            if(s[i]!=ch){
                cnt++;
            }else{
                mx=max(mx,cnt);
                cnt=0;
            }
        }
        mx=max(mx,cnt);
        int c=0;
        while(mx!=0){
            c++;
            mx/=2;
        }
        ans=min(ans,c);
    }
    pr(ans);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        AKG();
    }

    return 0;
}
