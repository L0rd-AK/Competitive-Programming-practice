#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
   

void AKG() { 
   int n;cin>>n;
   vector<ll> v(n);
   ll ans=0,pos=0,f=0,l=0;
   f(i,0,n){
    cin>>v[i];
    if(v[i]<0)ans++;
    else pos++;
    if(v[i]>0 && f==0)f=i+1;
    if(v[i]>0)l=i+1;
   }
   int ans2=0;
   f(i,0,n-1){
    if(v[i]<0 && v[i+1]>0)ans2++;
    if(v[i]>0 && v[i+1]<0)ans2++;
   }
//    cout<<f<<" "<<l<<" "<<ans2<<endl;
//    if(ans2<2)prnt(0);
//    else{
    
//    }
    int x=0;
     for(int i=f-1;i<l-1;i++){
        if(v[i]<0)x++;
     }
     prnt(x);

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
