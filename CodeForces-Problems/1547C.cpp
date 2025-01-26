#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
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

void AKG(){
    int k,n,m;cin>>k>>n>>m;
    vector<int> a(n),b(m),v;
    f(i,0,n)cin>>a[i];
    f(i,0,m)cin>>b[i];
    int i=0,j=0;
    while (i<n && j<m) {
        int cur = 0;
        if (a[i] == 0) {
            v.push_back(a[i++]);
            k++;
            continue;
        } else if (b[j] == 0) {
            v.push_back(b[j++]);
            k++;
            continue;
        }else if (a[i]<b[j]){
            cur = a[i++];
        } else{
            cur = b[j++];
        }
        if (cur<=k){
            v.push_back(cur);
        } else{
            prnt(-1);
            return;
        }
    }
    while(i<n){
        if (a[i] == 0) {
            v.push_back(a[i++]);
            k++;
        } else if (a[i]<=k){
            v.push_back(a[i++]);
        } else{
            prnt(-1);
            return;
        }
    }
    while(j<m){
        if (b[j] == 0) {
            v.push_back(b[j++]);
            k++;
        } else if (b[j]<=k){
            v.push_back(b[j++]);
        } else{
            prnt(-1);
            return;
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }cout<<endl;
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
