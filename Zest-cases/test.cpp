#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl

void AKG(){
     int n;cin>>n;
     string s;cin>>s;
     map<char,int> mp;
     for(auto i:s) mp[i]++;
     priority_queue<pair<char,int>> pq;
     for(auto i:mp)pq.push({i.second,i.first});
     string ans="";
     while(pq.size()>=2){
        auto a=pq.top();
        pq.pop();
        auto b=pq.top();
        pq.pop();
        ans+=a.firat;ans+=b.firat;
        if(a.second>1)pq.push({a.second,a.firat-1});
        if(b.second>1)pq.push({b.second,b.firat-1});
     }
     if(pq.size()!=0){
        auto c=pq.top();
        f(i,0,c.second)ans+=c.second;
     }
     prnt(ans);
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
    cin>>t;
    while(t--){
        AKG();
    }

#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
#endif
    return 0;
}
