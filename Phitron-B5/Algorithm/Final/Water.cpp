#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
 
void AKG() {
    int n;cin>>n;
    int a[n];
    f(i,0,n)cin>>a[i];
    int x=0,y=0,mx=INT_MIN;
    f(i,0,n){
        if(mx<a[i]){
            mx=a[i];
            x=i;
        }
    }       
    mx=INT_MIN;
    a[x]=-1;
    f(i,0,n){
        if(mx<a[i]){
            mx=a[i];
            y=i;
        }
    }        
    cout<<min(x,y)<<" "<<max(x,y)<<endl;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        AKG();
    }


    return 0;
}
