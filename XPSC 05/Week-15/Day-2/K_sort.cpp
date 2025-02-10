#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pt(x) cout << x << endl
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
// #define N 200005


void AKG() {
    int n;
      cin>>n;
      ll a[n],b[n];
      vl dif;
      f(i,0,n){cin>>a[i];b[i]=a[i];}
      f(i,1,n){
         if(b[i]<b[i-1]){
            b[i]=b[i-1];
         }
      }
      f(i,0,n){
         int x=b[i]-a[i];
         if(x)dif.push_back(x);
      }
      int size=dif.size();
      sort(all(dif));
 
      ll ans=0,z=0,zom=0;
      f(i,0,size){
         z+=dif[i];
         zom=dif[i];
         ans+=(zom*(size+1-i));
         if(i != size-1)dif[i+1]=(dif[i+1]-z);
      }
      pt(ans);
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
