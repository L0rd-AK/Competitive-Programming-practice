#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "BOB\n" : "ALICE\n")
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
  int n,k;cin>>n>>k;
  string s;cin>>s;
  
  int c1 = 0, c2 = 0, c3 = 0;
  f(i,0,k){
    if(s[i] == '0') c1++;
    else if(s[i] == '1') c2++;
    else c3++;
  }
  
  string ans = "";
  f(i,1,n+1){
    if(c1 >= i || c2 >= (n - i + 1) || k == n){
      ans += '-';
    }else if((c1 + c3) < i && (c2 + c3) < (n - i + 1)){
      ans += '+';
    }else{
      ans += '?';
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
