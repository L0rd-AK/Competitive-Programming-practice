#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
   

void AKG() { 
   int n;cin>>n;
   string s;cin>>s;
   vector<int> mn;
   ll mx_point=0,cng=0;
   f(i,0,n){
    int l=i,r=n-i-1;
    if(s[i]=='L'){
        if(r>l){
            cng++;
            mx_point+=r;
            mn.push_back(r-l);
        }else mx_point+=l;
    }else if(s[i]=='R'){
        if(l>r){
            cng++;
            mx_point+=l;
            mn.push_back(l-r);
        }else mx_point+=r;
    }
   }
   sort(mn.begin(),mn.end(),greater<int>());
   vector<ll> ans(n+1);
   for(int i=cng;i<=n;i++)ans[i]=mx_point;
   for(int i=cng-1;i>=1;i--){
    mx_point-=mn[i];
    ans[i]=mx_point;
   }
   for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
   cout<<endl;
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
