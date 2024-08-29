#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl
bool cmp(const pair<string,int> &a,const pair<string,int> &b)
{
    if(a.first<b.first) return true;
    else if(a.second>b.second && a.first==b.first) return true;
    else return false;
}
void AKG(){
    int n;cin>>n;
    vector<pair<string,int>> v(n);
    f(i,0,n){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    f(i,0,n){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        // AKG();
        int n;cin>>n;
        vector<pair<string,int>> v(n);
        f(i,0,n){
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end(),cmp);
        f(i,0,n){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
#endif
    return 0;
}
