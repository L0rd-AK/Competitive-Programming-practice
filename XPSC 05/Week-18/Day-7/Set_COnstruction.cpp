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

const int MOD = 998244353;
const int N = 3e5 + 5;
vi v[N];
void AKG()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)v[i].clear(), v[i].push_back(i);
  for (int i = 1; i <= n; i++){
    string s;
    cin >> s;
    for (int j = 0; j < n; j++)
    {
      if (s[j] == '1')
        v[j + 1].push_back(i);
    }
  }
  for (int i = 1; i <= n; i++){
    cout << v[i].size();
    for (int j : v[i])
      cout << " " << j;
    cout << endl;
  }
}

int main()
{
#ifdef LOCAL
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--)
  {
    AKG();
  }

  return 0;
}
