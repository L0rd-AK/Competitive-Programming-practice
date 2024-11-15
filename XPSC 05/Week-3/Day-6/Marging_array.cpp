#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
   int n,m;cin>>n>>m;
   vector<int> a(n),b(m),ans;
   f(i,0,n)cin>>a[i];
   f(i,0,m)cin>>b[i];
   int l=0,r=0;
   while(l<n && r<m){
        if(a[l]<b[r]){
            ans.push_back(a[l]);
            l++;
        }else if(a[l]>b[r]){
            ans.push_back(b[r]);
            r++;
        }else{
            ans.push_back(a[l]);
            l++;
        }
   }
   while(l<n){
        ans.push_back(a[l]);
        l++;
   }
   while(r<m){
        ans.push_back(b[r]);
        r++;
   }
   for(int i:ans)cout<<i<<" ";
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}