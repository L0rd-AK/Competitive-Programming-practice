#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
// #define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define yn(f) f ? cout << "Yes\n" : cout << "No\n"
#define prnt(x) cout << x << endl
   

void AKG() { 
   int n,k;cin>>n>>k;
   string s;cin>>s;
   int sIdx=0,eIdx=0,cnt=0;
   bool flg=1,flg1=1;
   for(int i=0;i<n;i++){
      if(s[i]=='1'){
        cnt++;
        if(cnt==k && flg1){
            eIdx=i;
            flg1=0;
        }
        while(i<n && s[i]=='1')i++;
      }
      if(cnt==k-1 && flg){
        sIdx=i;
        flg=0;
      }
   }
//    cout<<sIdx<<" "<<eIdx<<endl;
//    while(eIdx>=0 && s[eIdx]=='1'){
//      eIdx--;
//    }
//    cout<<sIdx<<" "<<eIdx<<endl;
//    while(sIdx<n && eIdx<n){
//      swap(s[sIdx],s[eIdx]);
//      sIdx++;
//      eIdx++;
//    }
   while(s[eIdx]=='1'){
     swap(s[sIdx],s[eIdx]);
     sIdx++;
     eIdx++;
   }
   prnt(s);
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
