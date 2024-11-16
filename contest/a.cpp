#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
// #define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define yn(f) f ? cout << "Yes\n" : cout << "No\n"
#define prnt(x) cout << x << endl
   

void AKG() { 
   string s;cin>>s;
   int o=0,t=0,th=0;
   for(int i=0;i<s.length();i++){
       if(s[i]=='1')o++;
       else if(s[i]=='2')t++;
       else if(s[i]=='3')th++;
   }
   yn(o==1 && t==2 && th==3);
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
