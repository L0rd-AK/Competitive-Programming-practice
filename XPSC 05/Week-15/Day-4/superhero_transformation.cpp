#include <bits/stdc++.h>
using namespace std;

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

// #define N 200005
bool isvowel(char c){
	string s="aeiou";
    f(i,0,5){
    	if(s[i]==c) return true;
    }
    return false;
}

void AKG() {
    string a,b;cin>>a>>b;
    int x=a.length();
    int y=b.length();
    if(x!=y){
    	yn(0);
        return;
    }else{
        bool ok=0;
        f(i,0,x){
            if(isvowel(a[i]) && !isvowel(b[i]))ok=1;
            else if(!isvowel(a[i]) && isvowel(b[i]))ok=1;
        }
        yn(!ok);
    }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;
    while (t--) {
        AKG();
    }
    
    return 0;
}