#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
#define f first
#define S second
#define pb push_back
#define el '\n'




int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);

int t; cin>>t;
    while (t--) {
        int n,a; cin>>n>>a;
        vector<int> v(n);
        int cnt1=0,cnt2=0;
        for (int i = 0; i < n; i++) cin>>v[i];
        sort(v.begin(),v.end());
        for (int i=0;i<n;i++) {
            if (v[i]<=a)cnt1++;
            if (v[i]>=a)cnt2++;
        }
        if (cnt1<cnt2)cout<<a+1<<el;
        else cout<<a-1<<el;
    }
   return 0;



}