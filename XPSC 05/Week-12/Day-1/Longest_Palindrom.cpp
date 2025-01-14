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

bool func(string s){
  string a=s;
  reverse(all(s));
  return a==s;
}
void AKG()
{
    int t,n;cin>>t>>n;
    vector<string> tmp,l,m,r;
    map<string,int>mp;
    while(t--){
        string s;cin>>s;
        tmp.push_back(s);
        mp[s]++;
    }
    for(auto s:tmp){
        if(func(s)){
            if(m.size()>0){
                string x = m.back();
                if(x==s)m.push_back(s);
            }else m.push_back(s);
        }else{
            string a=s;
            reverse(all(a));
            if(mp[a] && mp[s]){
                mp[a]--;
                mp[s]--;
                l.push_back(s);
                r.push_back(a);
            }
        }
    }
    ll z=(l.size() + m.size() + r.size())*n;
    if(z==0)prnt(0);
    else{
        reverse(all(r));
        prnt(z);
        for(auto i:l)cout<<i;
        for(auto i:m)cout<<i;
        for(auto i:r)cout<<i;
    }
    
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        AKG();
    }

    return 0;
}