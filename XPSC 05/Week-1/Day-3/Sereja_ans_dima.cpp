#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl



void AKG() {
    int t,n,s=0,d=0,c=0,l,r;
  cin>>t;int a[1000];
  for(int i=0;i<t;i++) cin>>a[i];
  
  l=0;
  r=t-1;
  for(int i=0;i<t;i++){
    if(c%2==0){
      if(a[l]>a[r]){s+=a[l];l++;}
      else {s+=a[r];r--;}
    }else{
      if(a[l]>a[r]){d+=a[l];l++;}
      else {d+=a[r];r--;}
    }c++;
  }
  cout<<s<<" "<<d<<endl;

}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
        auto begin = std::chrono::high_resolution_clock::now();
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while (t--) {
        AKG();
    }

    #ifndef ONLINE_JUDGE
        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
        cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    #endif

    return 0;
    
}