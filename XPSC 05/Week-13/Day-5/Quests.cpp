#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define dbg(x...)                 \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define dbg(x...)
#endif

bool Possible(vector<ll> a,ll n,ll d,ll c,ll k){
    if(k==0){
        return (a[0]*d>=c);
    }
    ll sum=0,ans=0;
    if(k>=n){
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
    }
    else{
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
    }
 
    ll times=d/k;
    ans=times*sum;
    ll rem=d%k;
    if(rem>=n){
        for(int i=0;i<n;i++){
            ans+=a[i];
        }
    }
    else{
        for(int i=0;i<rem;i++){
            ans+=a[i];
        }
    }
 
    return (ans>=c);
}

void AKG() {
    ll n,c,d;cin>>n>>c>>d;
    vector<ll> a(n);
    f(i,0,n) cin>>a[i];
    sort(all(a),greater<ll>());
    ll total=0;
    f(i,0,min(d,n))total+=a[i];
    if(a[0]*d<c){pt("Impossible");return;}
    if(total>=c){pt("Infinity");return;}
    ll l=0,r=d+2,ans=-1;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(Possible(a,n,d,c,mid+1)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    pt(ans);
   
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--)
    {
        AKG();
    }

    return 0;
}
