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
    string s;cin>>s;
    int i=0,ii=0,iii=0;
    for(char c:s){
        if(c=='1')i++;
        if(c=='2')ii++;
        if(c=='3')iii++;
    }
    int l=0,r=s.length()-1;
    while(l<=r){
        if(s[l]=='1' && i>1)i--,l++;
        else if(s[l]=='2' && ii>1)ii--,l++;
        else if(s[l]=='3' && iii>1)iii--,l++;

        if(s[r]=='1' && i>1)i--,r--;
        else if(s[r]=='2' && ii>1)ii--,r--;
        else if(s[r]=='3' && iii>1)iii--,r--;
    }
    pr(r-l+1);
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