#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
    int z;cin>>z;
    string s;cin>>s;
    int n=s.length();
    if(s[0]<s[n-1])prnt(s);
    else if(s[0]>s[n-1]){
        string x=s;
        reverse(all(s));
        cout<<s<<x<<endl;
    }else{
        int l=0,r=n-1;
        while(l<r){
            if(s[l]<s[r]){
                prnt(s);
                return;
            }
            else if(s[l]>s[r]){
                string x=s;
                reverse(all(s));
                cout<<s<<x<<endl;
                return;
            }
            l++;r--;
        }
        cout<<s<<endl;
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
