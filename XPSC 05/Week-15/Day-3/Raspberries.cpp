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
# define N 2000005

void AKG() {
    int n,k; cin>>n>>k;
    vi a(n);
    f(i, 0, n)cin >> a[i];
    int ans=INT_MAX,e_cnt=0;
    if(k==2||k==3||k==5){
      for(int i:a){
         if(i%2==0)e_cnt++;
         int tmp=i,cnt=0;
         while(tmp%k!=0){
            tmp++;
            cnt++;
         }
         ans=min(ans,cnt);
      }
      pr(ans);
    }else{
      for(int i:a){
         if(i%2==0)e_cnt++;
         int tmp=i,cnt=0;
         while(tmp%4!=0){
            tmp++;
            cnt++;
         }
         ans=min(ans,cnt);
      }
      if(e_cnt>=2)pr(0);
      else if(e_cnt==1)pr(min(ans,1));
      else pr (min(ans,2));
    }
    
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }
    
    return 0;
}
