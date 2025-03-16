#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll safeFloorShift(ll x, ll k) {
  if(k >= 63) return 0;
  return x >> k;
}

ll safeCeilShift(ll x, ll k) {
  if(k >= 63) return (x > 0 ? 1 : 0);
  return (x + ((ll)1 << k) - 1) >> k;
}

void solve(){
  ll x, n, m;
  cin >> x >> n >> m;
  
  ll optionA;
  if(n >= 63) {
    optionA = 0;
  } else {
    ll tmp = x >> n;
    optionA = safeCeilShift(tmp, m);
  }
  
  ll optionB = safeFloorShift(safeCeilShift(x, m), n);
  
  ll maximum = max(optionA, optionB);
  ll minimum = min(optionA, optionB);
  
  cout << maximum << " " << minimum << "\n";
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

  int t; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
