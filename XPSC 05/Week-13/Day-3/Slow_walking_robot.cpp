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
    string s;cin>>s;
    int n = s.size();
    unordered_map<char,int> mp;
    
    f(i,0,n)mp[s[i]]++;
    int l=mp['L'],r=mp['R'],u=mp['U'],d=mp['D'];
    l = min(l,r),d = min(u,d);
    u = min(u,d),r = min(l,r);
    if(l==0 || r==0){
        if(u>0 && d>0){
            prnt(2);
            prnt("UD");
            return;
        }
    }
    if(u==0 || d==0){
        if(l>0 && r>0){
            prnt(2);
            prnt("LR");
            return;
        }
    }
    if(l>0 && r>0 && u>0 && d>0){
        string ans="";
        while(l--)ans+='L';
        while(u--)ans+='U';
        while(r--)ans+='R';
        while(d--)ans+='D';
        prnt(ans.size());
        prnt(ans);
    }else{
        prnt(0);
    }
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
