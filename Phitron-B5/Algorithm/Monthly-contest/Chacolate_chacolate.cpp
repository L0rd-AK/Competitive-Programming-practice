#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl
int cnt(int a) {
    if (a<3)return 0;
    
    int x=a/3;
    int y=a%3;
    return x+cnt(x+y);
}
void AKG() {
    int n;cin>>n;
    int x=n/5;
    int ans;
    ans=x+cnt(x);
    prnt(ans);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    cin >> t;  
    while (t--) {
        AKG();  
    }
    return 0;
}
