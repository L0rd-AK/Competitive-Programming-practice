#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll Csum = 0, odd = 0, sum = 0,fsum=0;

    f(i, 0, n) {
        cin >> a[i];
        sum += a[i];
        Csum += ((a[i] + k - 1) / k);  
        fsum+=(a[i]/k);
        if (abs(a[i]) % 2 == 1) {
            odd++;
        }
    }

    // cout << Csum << " " << odd << endl;
    if(k==1 && sum!=0)yn(0);
    else if(k==1 && sum==0)yn(1);
    else if(Csum==0)yn(1);
    else if(fsum==0)yn(1);
    else if(Csum > 0 && Csum <= odd) {
        yn(1);
    }else if(fsum<0 && fsum<=odd)yn(1); 
    else {
        yn(0);
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
