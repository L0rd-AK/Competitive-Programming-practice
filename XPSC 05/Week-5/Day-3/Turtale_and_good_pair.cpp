#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl

void AKG() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto i : s) mp[i]++;
    priority_queue<pair<int, char>> pq;
    for (auto i : mp) pq.push({i.second, i.first}); 
    
    string ans = "";
    while (pq.size() >= 2) {
        auto a = pq.top();
        pq.pop();
        auto b = pq.top();
        pq.pop();
        ans += a.second;
        ans += b.second;
        
        if (a.first > 1) pq.push({a.first - 1, a.second});
        if (b.first > 1) pq.push({b.first - 1, b.second});
    }
    
    if (!pq.empty()) {
        auto c = pq.top();
        pq.pop(); f(i,0,c.first )ans += c.second;
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